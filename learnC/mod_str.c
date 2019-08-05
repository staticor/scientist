#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 91

void ToUpper(char *);
int PunctCount(const char *);

int main(int argc, char *argv[]) {
	char line[LIMIT];
	char *find; 
	
	puts("Please enter a line: ");
	
	fgets(line, LIMIT, stdin);
	
	find = strchr(line, '\n') ;    // find \n
	if (find) 
	   *find = '\0';
	ToUpper(line);
	puts(line);
	printf("That line has %d punctuation characters. \n", PunctCount(line));
	return 0;
}


void ToUpper(char *str){
	while(*str){
		*str = toupper(*str);
		str ++;
	}
}

int PunctCount(const char * str){
	int ct = 0;
	while(*str) {
			if(ispunct(*str))
				ct ++;
			str ++;
		}
	return ct;
}