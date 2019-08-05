#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main(){


	printf("This is a string.");
	printf("This is on\ntwo lines!");
	printf("\nFor \" you write. \n");


	char saying[40] = "I'm looking for somebody superhero.";
	// clang. \0  the end of string.
	printf("%s\n, \n", saying);

    return 0;
}

