#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main(){

	int s = 0;

	for(int count = 1; count <= 100; count++){
		s = s + count;
		printf("the total sum is : %6d\n", s);
	}



	printf("\n****************************");

	for(int count = 1; count<=8; ++count){
		printf("\n*                          *");
	}

	printf("\n****************************");

    return 0;
}

