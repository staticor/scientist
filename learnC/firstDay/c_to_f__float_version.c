#include <stdio.h>



/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ... , 300 


-- comment, which in this case explains briefly what the program does.
*/

int main(){

    printf("==================================================================");


    printf("\n");

    float fahr, celsius;

    int lower, upper, step;

    lower = 0;

    upper = 300;

    step = 20;  /* step size */

    fahr = lower;

    // float formated
    while(fahr <= upper) {
    	celsius = 5.0 / 9.0 * (fahr - 32.0) ;

    	printf("%3.0f\t%6.1f\n", fahr, celsius);

    	fahr = fahr + step;
    }

    printf("==================================================================\n");




    return 0;
}

/* we hive learned


* slash, with star,  comment clause.


* int, a type of datatype.  by contrast with float.
       16-bit:    2^15    left , right.   32767(2^15+1)


*/