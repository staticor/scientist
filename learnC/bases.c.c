/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main(void)
{
	int x = 100;

	// 10进制, 8进制 16进制
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	
	// 
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

	return 0;
}