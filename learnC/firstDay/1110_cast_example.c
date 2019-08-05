#include <stdio.h>
#include <limits.h>



int main(){

	int a=  2;
	int b = 121341;


	double result; 
	result = (double) (a + b) * 0.3;


	printf("\n%5.2f", result);

	double result1 =  (a + b) * 0.3;
	printf("\n%5.2f", result1);
    return 0;
}

