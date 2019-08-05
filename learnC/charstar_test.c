#include <stdio.h>

int main(int argc, char *argv[]) {
	char heart1[] = "I love Parris!";
	
	char *heart = "I love Parris!";
	
	while(*(heart) != '\0')
	      putchar(*(heart++));
}