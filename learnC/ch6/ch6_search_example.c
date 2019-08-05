#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

int main(){

	int Number = 25;
	int *pNumber = &Number;

	printf(" %d", Number);

	printf(" %d", *pNumber);

	// printf(" %s", pNumber);

	char str[] = "The quick bronw fox";

	int ch = 'q';

	char *pGot_char = NULL;

	pGot_char = strchar(str, ch);

	printf("%c", *pGot_char);

    return 0;
}

