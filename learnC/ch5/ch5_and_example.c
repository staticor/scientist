#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main(){


	// Define some integer variables
	long a = 1L;
	long b = 2L;
	long c = 3L;

	// define some floating-point variables;

	double d= 4.0;
	double e= 5.0;
	double f=6.0;

	printf("A variable of type long occupies %lu bytes.", sizeof(long));
	
	printf("\nHere are the addresses of some variables of type long: ");
	printf("\nThe address of a is : %p The address of b is : %p", &a, &b);



	printf("A variable of type long occupies %lu bytes.", sizeof(double));
	printf("\nHere are the addresses of some variables of type double: ");
	printf("\nThe address of a is : %p The address of b is : %p", &d, &e);

    return 0;
}

