#include <stdio.h>

int main(int argc, char *argv[]) {
	float weight;
	float value; 
	
	printf("Are you wroth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	
	/* get user input  */
	scanf("%f", &weight);
	/* price */
	value = 1700.0 * weight * 14.5853 ;
	
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop. \n");
	printf("eat more to maintain your value.\n");
	
	return 0;
}