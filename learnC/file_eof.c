#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int ch;
	FILE * fp;
	char fname[50]; // file name
	
	printf("Enter the name of the file: ");
	scanf("%s", fname);
	
	fp = fopen(fname, "r"); // read file
	
	if (fp == NULL ){
		printf("Failed to open file. Bye\n");
		exit(1); // exit the game
	}	
	
	// getc(fp) // get a char
	while( (ch = getc(fp)) != EOF)
		putchar(ch);
	
	fclose(fp);
	
	return 0;
	
}