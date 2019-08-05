#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

int main(){

	// #if defined __STDC_LIB_EXT1__
	// 	printf("Optional functions are defined.\n");
	// #else
	// 	printf("Optional functions are not defined.\n");
	// #endif

	char str[][70] = {
		"I love you.",
		"Superhero",
		"heyhey xiao maomi"
	};

	int strCount = 3; // sizeof(str);

	for(unsigned int i =0; i<strCount; ++i)
	{

		int count = 0;
		// while (str[i])
		printf("The string:\n   \"%s\"\n contains %zu characters.\n", str[i], sizeof(str[i]) );
	}


    return 0;
}

