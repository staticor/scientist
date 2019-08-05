#include <stdio.h>

#define SIZE 50

int main(int argc, char *argv[]) {
	
	float list[SIZE];
	
	readlist(list, SIZE);
	sort(list, SIZE);
	average(list, SIZE);
	bargraph(list, SIZE);
	return 0;
}