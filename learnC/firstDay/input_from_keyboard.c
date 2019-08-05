#include <stdio.h>



/* 

getchar

-- comment, which in this case explains briefly what the program does.
*/


int main(){

    printf("==================================================================");


	int c;

    c = getchar();

    while (c != EOF) {

        putchar(c);

        c = getchar();

        printf("%c", c);

    }
    printf("==================================================================\n");




    return 0;
}

/* we hive learned


* slash, with star,  comment clause.


* int, a type of datatype.  by contrast with float.
       16-bit:    2^15    left , right.   32767(2^15+1)


*/