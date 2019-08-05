#include <stdio.h>

int main(void) {
	int dogs; 
	
	dogs = 5;
	
	printf("I have %d dogs .. ... ....", dogs);
	printf("\nHow many dogs do you have???\n");
	int yourdogs ;
	
	scanf("%d", &yourdogs);
	
	printf("You have %d dogs", yourdogs);
	
	if(yourdogs > dogs)
		printf("\nIt's more than i have");
	else {
		if (yourdogs == dogs)
			printf("\nOh no! we have the same");
		else 
			printf("\nIt's less than i have.");
	}
	
}