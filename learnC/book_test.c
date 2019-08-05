#include <stdio.h>
#include "constant.h"


int main(int argc, char *argv[]) {
	
	// title 
	// author
	// value
	struct book library = { 
		"The pPIour Pirate and the Devious Damsel",
		"Renee Vivotte",
		1.99
		}	;
		
	printf("%f\n", library.value);
	
	struct book surprise = { .value = 10.99 };
	
	printf(" %f \n", surprise.value);
	
	printf(" -%s- \n", surprise.title); // ""
	
	
	struct book wiki = { .value = 99.99,
	 .author= "museum ship",
	.title = "Rule out the world"
	};
	
	printf(" %f \n", wiki.value);
		
	printf(" -%s- ", wiki.title); // ""
		
		
	
}