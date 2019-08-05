
# 利用 crontab 做简单定时器
# 每天 0:30、6:00、10:00 发送邮件

# ToDo List
# 1、十分钟级别的发邮件，过滤已发报警
# 2、兼容新集群

import pdb
import requests
import logging
from logutil import Log
from datetime import datetime
from utils import reparse_data, send_mail, load_config


configFile = "hiveTask.config"

class CheckAzkaban(object):

    def __init__(self, environmentType="old"):
        self.environmentType = environmentType

        self.azkabanBaseURL = "http://192.168.79.239:8443"
        if self.environmentType == "old":
            self.azkabanBaseURL = "http://iz2ze90panu8ok1x29ap3vz:8443"

        self.historyBaseURL = self.azkabanBaseURL + "/history?page=%s&size=16"

        self.sessionID, self.cookie = self.login()

        self._email_config = load_config(configFile, "email")

        self.logger_ = Log('', log_path="warningAzkaban" + ".log",
                           log_level=logging.DEBUG).log

        # 监控的项目范围
        self.projectList = ["warehouse", "igetcool"]

    # 获取登录信息
    def login(self):
        data = {
            "action": "login",
            "username": "metrics",
            "password": "metrics"
        }

        r = requests.post(url=self.azkabanBaseURL, data=data, verify=False)

        sessionID = eval(r.text).get("session.id", None)
        return sessionID, r.cookies

    def checkHistory(self):
        self.logger_.info("start check Azkaban history, now is %s" % (datetime.now()))
        flows = []
        page = 1
        status = True
        needWarning = False
        while status:
            url = self.historyBaseURL % (page)
            self.logger_.info("page is %d" % page)
            html = requests.get(url=url, cookies=self.cookie, verify=False)

            data = reparse_data(url=url, html_data=html.text)

            self.logger_.info("parse result len is %d" % len(data.get("items", "")))

            if not data.get("items", None):
                print(data)
                break

            for flow in data.get("items", None):
                flowInfo = {}
                flowInfo["flowName"] = flow.get("flowName", None)[0] if flow.get("flowName", None) else ''
                flowInfo["execId"] = flow.get("execId", None)[0] if flow.get("execId", None) else ''
                flowInfo["startTime"] = flow.get("startTime", None)[0] if flow.get("startTime", None) else ''
                flowInfo["endTime"] = flow.get("endTime", None)[0] if flow.get("endTime", None) else ''
                flowInfo["status"] = flow.get("status", None)[0] if flow.get("status", None) else ''
                flowInfo["project"] = flow.get("project", None)[0] if flow.get("project", None) else ''

                # 解决时间对比问题
                startTimeDateTime = datetime.strptime(flowInfo["startTime"], "%Y-%m-%d %H:%M:%S")

                now = datetime.now()

                if startTimeDateTime.day != now.day:
                    status = False
                else:
                    flows.append(flowInfo)

                    # 只对存在当天的错误进行判断
                    if flowInfo["status"] == "Failed" or "Failure" in flowInfo["status"]:
                        self.logger_.error("status is fail, flow is %s" % flow)
                        needWarning = True
                        #  添加到redis中，作为已发过滤

                # 跳过非监控项目
                if flowInfo["project"] not in self.projectList:
                    continue

                # 过滤已发送内容

            # 解决翻页问题
            if not status:
                self.logger_.info("don\'t have new data form history")
                continue
            page += 1

        # 发邮件，区分标题
        self.logger_.info("get email html")
        html = self.makeHtml(flows)
        self.logger_.info("sent email")
        self.sentResust(html, needWarning)
        self.logger_.info("finish!")

    # 发送邮件
    def sentResust(self, html, needWarning=False):
        if needWarning:
            subject = self.environmentType + '集群Flow有失败的'
        else:
            subject = self.environmentType + '集群Flow均成功'
        to_address = self._email_config['to_address'].split(',')
        send_mail(self._email_config['from_address'], to_address, subject, "\n".join(html), self._email_config['pwd'], subtype="html")

    # 格式化报表
    def makeHtml(self, flows):
        redList = ["Running", "Success"]
        html = []
        html.append("<!doctype html>")
        html.append("<html>")
        html.append('<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>')
        html.append("<body>")
        html.append('<table border="1">')
        html.append("<tr>")
        html.append("<td><strong>execId</strong></td>")
        html.append("<td><strong>flowName</strong></td>")
        html.append("<td><strong>startTime</strong></td>")
        html.append("<td><strong>endTime</strong></td>")
        html.append("<td><strong>status</strong></td>")
        html.append("</tr>")
        for flow in flows:
            html.append("<tr>")
            html.append('<td>%s</td>' % (flow.get("execId", None)))
            html.append('<td>%s</td>' % (flow.get("flowName", None)))
            html.append('<td>%s</td>' % (flow.get("startTime", None)))
            html.append('<td>%s</td>' % (flow.get("endTime", None)))
            status = flow.get("status", None)
            if status not in redList:
                html.append('<td style="color:red">%s</td>' % (flow.get("status", None)))
            else:
                html.append('<td>%s</td>' % (flow.get("status", None)))
            html.append("</tr>")
        html.append("</table>")
        html.append("<br/>")
        html.append('<table border="1">')

        html.append("</table>")
        html.append("</body>")
        html.append("</html>")
        return html

if __name__ == "__main__":
    # environmentType = "old"
    environmentType = "new"
    CA = CheckAzkaban(environmentType)
    CA.checkHistory()