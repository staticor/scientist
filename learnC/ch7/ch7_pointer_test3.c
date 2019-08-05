#include <stdio.h>

int main(int argc, char *argv[]) {
	// use pointer
	
	int number = 28;
	int *pnumber = &number;
	
	*pnumber += 25;
	
	int value = 999;
	pnumber = &value;
	*pnumber += 25;
	
	
	long num1 = 0L;
	long num2 = 0L;
	
	long *pnum = NULL;
	
	pnum = &num1;
	*pnum = 2L;
	++num2;
	num2 += *pnum; 
	pnum = &num2;
	++*pnum; 
	printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld \n", num1, num2, *pnum, *pnum + num2);
}