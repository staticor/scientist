#include <stdio.h>


#define PI 3.141519f


int main(){


	float radius = 0.0f;
	float diameter = 0.0f;

	float circumference = 0.0f;
	float area = 0.0f;

	// float Pi = 3.14159265f;

	printf("Input the diameter of the table:  ");

	scanf("%f", &diameter);

	radius = diameter /2.0f;
	circumference = 2.0f * PI *radius;
	area = PI * radius * radius;


	printf("\n The circumference is %.2f  \n", circumference);

	printf("\n The area is %.2f\n", area);

	printf("\n ==================================================================")


    return 0;
}

/* variable

* slash, with star,  comment clause.


* int, a type of datatype.  by contrast with float.
       16-bit:    2^15    left , right.   32767(2^15+1)


*/