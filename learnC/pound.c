#include <stdio.h>
void pound(int n); // ANSI function statement
int main(int argc, char *argv[]) {
	int times = 5;
	char ch = '!';
	
	float f = 6.0f;
	
	pound(times);
	pound(ch);
	pound(f);
	
	return 0;
}

void pound(int n){
	while(n-- > 0){
		printf("#");
	}
	printf("\n");
}