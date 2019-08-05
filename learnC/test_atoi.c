#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	char *str = "12345.67";
	n = atoi(str);
	printf("string = %s integer =%d\n", str, n);
	return 0;
}