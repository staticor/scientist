

set.seed(1428)

library(ggplot2)

dsmall <- diamonds[sample(nrow(diamonds), 100),]
                   
                   
# x: carat
# y: price
qplot(carat, price, data= diamonds)



# x, y --> log
qplot(log(carat), log(price), data=diamonds)


#x*y*z 是体积
qplot(carat, x*y*z, data=diamonds)



qplot(carat, price, data=dsmall, color=color)




# alpha  表示多少次重叠之后颜色变得不透明
qplot(carat, price, data=diamonds, alpha=I(1/200))





#==================================================================#
#
#geom: "point"     散点图
#geom: "smooth"     平滑曲线
#geom: "boxplot"     箱线图
#geom: "path"   "line"   


# method 参数， 选择不同的平滑器
qplot(carat, price, data=dsmall, geom=c("point", "smooth"), method="loess")



#一维分布，  geom="histogram",   "density"    "bar"

qplot(color, price/carat, data=diamonds, geom="jitter", alpha=I(1/5))







# histogram
qplot(carat, data=diamonds, geom="histogram", binwidthe=50)

# binwidth - -
qplot(carat, data=diamonds, geom="histogram", binwidth=1)
qplot(carat, data=diamonds, geom="histogram", binwidth=0.1)
qplot(carat, data=diamonds, geom="histogram", binwidth=0.01)


# density  
qplot(carat, data=diamonds, geom="density")

qplot(carat, data=diamonds, geom="density", colour=color)















# bar plot

qplot(color, data=diamonds, geom="bar")

# 按 carat 加权计算
qplot(color, data=diamonds, geom="bar", weight=carat) + scale_y_continuous("carat")












# 时间序列中的线条图和路径图

qplot(date, unemploy, data=economics, geom="line")

qplot(date, uempmed, data=economics, geom="line")






year <- function(x) as.POSIXlt(x)$year + 1900
qplot(unemploy/pop, uempmed, data=economics, geom=c("point", "path"))


qplot(unemploy /pop, uempmed, data=economics, geom="path", colour=year(date))








# facet

qplot(carat, data=diamonds, facets=color~ ., geom="histogram", binwidth=0.1, xlim=c(0,3))


qplot(carat, ..density..,  data=diamonds, facets=color~ ., geom="histogram", binwidth=0.1, xlim=c(0,3))






