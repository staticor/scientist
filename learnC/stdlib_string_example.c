#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

int main(){

	char str[] = "luojisiwei";

	printf("%lu, \n", strlen(str)); // string length  strlen


	// strcpy_s()

	char source[] = "Only the mediocre are always at their best.";

	char destination[50];

	if( strcpy(destination,  source))
		printf("An error occurred copying the string.\n");
    return 0;
}

