#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main(){

	

	char ch = 'A';

	switch(tolower(ch)){
		case 'a': case 'e' : case 'i': case 'o' : case 'u':
			printf("the character is a vowel. \n");
			break;

		case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
			printf("the character is ....");
			break;
		default:
			printf("the character is not a letter.");
			break;

	}


	

    return 0;
}

