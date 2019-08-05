#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int chosen = 0;

	chosen = rand();   // set to a random integer     between < 0, RAND_MAX>

	printf("%d\n", chosen);



	int newchosen = chosen % 101; 
	printf("%d\n", newchosen);

    return 0;
}

