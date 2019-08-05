#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int number = 15;
	int *pointer = &number;
	
	int result = 0 ;
	
	printf("%d\n", *pointer);
	
	result = *pointer + 5;
	
	printf("%d\n", *pointer);
	
	printf("%d\n", *pointer);
	
}