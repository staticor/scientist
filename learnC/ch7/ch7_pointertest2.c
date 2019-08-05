#include <stdio.h>

int main(int argc, char *argv[]) {
	int *pnumber;
	int* anotherpnumber;
	
	int number = 15;
	int *pointer = &number; 
	int result = 0;
	
	result = *pointer + 5;
	printf("%6d\n", result);
	
	printf("number's address: %p\n", &number);
	
	pointer = &number;
	printf("pnumber's address: %p\n", (void*) &pnumber);
	
	
	//*運算符  間接運算符。 也成爲 取消引用運算符。
	
}