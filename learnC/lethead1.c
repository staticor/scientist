#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Plaza"
#define PLACE "Da wang lu"
#define WIDTH 40

void starbar(void); /* function prototype */

int main(int argc, char *argv[]) {
	starbar();
	printf("%s \n", NAME);
	printf("%s \n", ADDRESS);
	printf("%s \n", PLACE);
	starbar();
	return 0;	
}

void starbar(void) {
	int count; 
	for(count = 1; count <=WIDTH; count ++){
		putchar('*');
	}
	putchar('\n');
}