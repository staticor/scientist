#include <stdio.h>
#include <stdlib.h> /* for exit() */

#include "list.h"
void showmovies(Item item);

char * s_gets(char *st, int n );

int main(int argc, char *argv[]) {
	List movies;
	Item temp;
	
	/* 初始化 */
	InitialzeList(&movies);
	if(ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available ! Bye !\n");
		exit(1);
	}
	/* input */
	puts("Enter first movie title:");
	while( s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0') {
		puts("Enter your rating <0-10>:");
		scanf("%d", &temp.rating);
		while(getchar()!= '\n')
			continue;
		if (AddItem(temp, &movies) == false){
			fprintf(stderr, "Problem allocating memory\n");
			break; 
		}
		if(ListIsFull(&movies)){
			puts("The list is now full.");
			break;
		}
		puts("Enter next movie title (empty line to stop");
	}
	
	/* show */
	if(ListIsEmpty(&movies)){
		printf("No data entered");
	}
	else {
		printf("Here is the movie list:\n");
		Traverse(&movies, showmovies);
	}
	
	printf("You entered %d movies .\n", ListItemCount(&movies));
	
	/* clean */
	EmptyTheList(&movies);
	printf("Bye! \n");
	
	return 0;
}


void showmovies(Item item){
	printf("Movie: %s Rating:%d\n", item.title, item.rating);
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