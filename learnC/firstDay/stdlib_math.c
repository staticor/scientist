#include <stdio.h>
#include <limits.h>
#include <math.h>


int main(){

	float x = 3.1341234f;

	printf("%6.2f\n", floor(x)); // floor function

	printf("%6.2f\n", ceil(x)); // ceil function

	printf("%6.2f\n", fabs(x)); // fabs function

	printf("%6.2f\n", sin(x)); // sin function

	printf("%6.2f\n", cos(x)); // cos function

	printf("%6.2f\n", exp(x)); // exp function

	printf("%6.2f\n", sqrt(x)); // sqrt function

	printf("%6.2f\n", pow(x, 2)); // pow function

	printf("%6.2f\n", log(x)); // log function

    return 0;
}

