#include <stdio.h>



/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ... , 300 


-- comment, which in this case explains briefly what the program does.
*/

int main(){

    printf("==================================================================");


    printf("\n");


    int fahr; 

    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    	printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));


    printf("==================================================================\n");




    return 0;
}

/* we hive learned


* slash, with star,  comment clause.


* int, a type of datatype.  by contrast with float.
       16-bit:    2^15    left , right.   32767(2^15+1)


*/