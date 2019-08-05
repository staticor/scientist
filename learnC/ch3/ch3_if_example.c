#include <stdio.h>
#include <limits.h>



int main(){


	int age = 31;
	int weight = 180;

	if(weight < 160 )
		printf("You are too thin!");
	else
		printf("You are too fat!");

	printf("\n66============");

	if(weight < 160 )
		printf("You are too thin!");
	else
		if (weight > 200)
			printf("You are too too fat!");
		else 
			printf("You are a little bit fat!");



	if(weight >= 100 && weight <= 200)
		printf("\nhaha");
    return 0;
}

