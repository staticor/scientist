#include <stdio.h>
#include <limits.h>
#include <ctype.h>


int main(){

	int s = 0;

	for(int count = 1; count <= 100; count++){
		s = s + count;
		printf("the total sum is : %6d\n", s);
	}



    return 0;
}

