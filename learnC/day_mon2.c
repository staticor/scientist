#include <stdio.h>

int main(int argc, char *argv[]) {
	const int days[] = { 1, 2, 3, 44};
	
	int index;
	
	for (index = 0; index < sizeof days / sizeof days[0]; index ++)
		printf("MONTH %2d has %d dasy .\n", index + 1, days[index]);
}