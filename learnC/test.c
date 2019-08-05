#include <stdio.h>

int main(int argc, char *argv[]) {
	int rows = 10; 
	int columns = 8;
	for (int i = 0 ;i< rows; i++){
		for (int j = 0; j < columns; j ++){
			printf("$");
		}
		printf("\n");
		}
	return 0;
}