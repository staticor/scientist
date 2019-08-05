#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main(){

	int numbers[10];

	for(int i = 0; i < 10; i++){
		numbers[i] = i * 10;
		printf("%d -- \n", numbers[i]);
	}

    return 0;
}

