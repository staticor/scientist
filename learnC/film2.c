/* films1.c -- using an array of structures */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE        45      /* size of array to hold title   */
#define FMAX         5       /* maximum number of film titles */

struct film {
	char title[TSIZE];
	int rating;
	struct film *next;
	// struct film * head
};

char * s_gets( char * st, int n);

int main(void) {
	struct film * head = NULL; 
	struct film * prev , * current;
	char input[TSIZE];
	
	
	puts("Enter first movie title: ");
	
	while(s_gets(input, TSIZE) != NULL && input[0] != '\0') {
		current = (struct film *) malloc(sizeof (struct film));
		if (head == NULL)
			current = head;
		else 
			prev->next = current;
		
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf("%d", &current->rating);
		while(getchar()!= '\n'){
			continue;
		}
		puts("Enter next movie title (empty line to stop)");
		prev = current;
	}	
	
	
	if (head == NULL)
		printf("No data entered");
	else 
		printf("movie list");
	current = head; 
	while(current != NULL){
		printf("Movie %s  Rating: %d\n", current->title, current->rating);
		current = current->next;
	}
	
	current = head ;
	while(current != NULL){
		free(current);
		head = current->next; 
	}
	
	printf("Bye");
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');   // look for newline
		if (find)                  // if the address is not NULL,
			*find = '\0';          // place a null character there
		else
			while (getchar() != '\n')
				continue;          // dispose of rest of line
	}
	return ret_val;
}