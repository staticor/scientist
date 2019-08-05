#include <stdio.h>
#include <limits.h>



int main(){

	char str[] = "Tutorials Point";

	int i = 0;

	char c;

	while(str[i]) {
		int a = str[i];
		printf("%c\n", toupper(a));
		i ++;
	}
    return 0;
}

