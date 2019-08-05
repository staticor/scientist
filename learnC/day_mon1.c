#include <stdio.h>
#define MONTHS 12

int main(int argc, char *argv[]) {
	const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int index;
	
	// read-only variable is not assignable
//	days[9] = 12312; 

	for (index =0; index < MONTHS; index ++ ) 
		printf("Month %2d has %2d days. \n", index + 1, days[index])	;
}