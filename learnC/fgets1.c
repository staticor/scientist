#include <stdio.h>
#define STLEN 14

int main(int argc, char *argv[]) {

		char words[STLEN];
		
		puts("Enter a string, please");
		
		fgets(words, STLEN, stdin);
		
		printf("Your strign twice (puts(), then fputs(): \n")	;
		
		puts(words);
		
		fputs(words, stdout);
		
		
		puts("Enter aother string, please");
		
		fgets(words, STLEN, stdin);
		
		printf("Your strign twice (puts(), then fputs(): \n")	;
		
		puts(words);
		
		fputs(words, stdout);
		
		puts("Done.");
		
		return 0; 
		
	
}