#include <stdio.h>

#define MSG "I'm special."

int main(int argc, char *argv[]) {
	// printf("address of \" I'm special\": %p \n", "I'm special");
	
	// new address
	char ar[] = MSG;
	
	// same address 
	const char *pt = MSG;
	printf("address of \" I'm special\": %p \n", "I'm special");
	printf("              address ar: %p\n", ar);
	printf("              address pt: %p\n", pt);
	printf("              address MSG: %p\n", MSG);
	printf("address of \" I'm special\": %p \n", "I'm special");



	char heart[] = "I love Tillie!";
	const char *head = "I love Millie!";
	int i;
	for (i = 0; i < 6; i++)
		putchar(heart[i])	;
	putchar('\n');
	for (i = 0; i < 6; i++) 
		putchar(head[i]);
	putchar('\n');
	
	for (i = 0; i < 6; i++)
		putchar( *(heart+i))	;
	putchar('\n');
	for (i = 0; i < 6; i++) 
		putchar(*(head +i));
		
	
	
	char newheart[] = "a new heart"; 
	
	const char *p ;
	
//	p = newheart;  // it's ok
	
	// newheart = p; // it's error
	
}