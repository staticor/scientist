#include <stdio.h>


int calculate(int n);

int main(int argc, char *argv[]) {
	
	
	printf("hello its exercise 2 \n");
	printf("==================================================================\n");
	
	printf("Yang jinyong\n");
	printf("jinyong\n");
	printf("Yang\n");
	
	printf("jinyong Yang");
	
	printf("==================================================================\n");

	printf("My age is %d days\n", 30 * 365);
	
	printf("toes: 15, calcuate result is %d", calculate(15));
}

int calculate(int n){
	return n * 2 + n * n;
}