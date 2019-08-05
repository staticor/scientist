#include <stdio.h>


double power(double n, int p); //ANSI function 

int main(int argc, char *argv[]) {
	
	double xx, xpow; 
	int exp;
	printf("calculate a function the positive integer power: \n");
	
	double x =  power(2, 64);
	printf("%20.0f\n", x);
	return 0;
}


double power(double n, int p){
	double result = 1; 
	while(p-- > 0){
		result = result * n;
	}
	return result;
}