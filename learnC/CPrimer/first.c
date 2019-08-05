#include <stdio.h>
void butler(void);

int main(int argc, char *argv[]) {
	int feet, fathoms;
	
	fathoms = 2;
	feet = 6 * fathoms; 
	
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);
		
		
	butler();
	return 0;
}

void butler(void) {
	printf("You rang, sir? \n");
}