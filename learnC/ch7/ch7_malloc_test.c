#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int *pNumber = (int*) malloc(100);
	
	// 请求100个字节 并把
	
	
	/* 内存泄漏
	   动态分配内存， 应该在不需要时释放它们。  堆上内存的内存会在程序结束自动释放。
	    最好在使用完这些内存立即释放。   甚至是在退出之前， 也应立即释放。 
	 比较复杂情况下， 容易出现内存泄漏。 
	释放语句： */
	
	free(pNumber);
	pNumber= NULL;
}