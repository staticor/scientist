#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("hello");
	
	printf("==================================================================\n");
	
	char beep = 7;
	
	printf("\007");
	
	
	int A = 65;
	
	printf("%c", A);

	printf("==================================================================\n");

	float f = 3.156 * 10000000;
	int age = 31;
	printf("%e", f * age);	
}