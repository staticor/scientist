#include <stdio.h>

void add_to(double ar[],  int n, double val);

int main(int argc, char *argv[]) {
	
	double arr[] = {1, 3, 5, 7}	;
	
	
	// const double arr[] = {1, 3, 5, 7}	; // 加上了 const 就不能再被修改了。 
	
	add_to(arr, 4, 10);
	
	for(int i = 0; i < 4; i++) {
		printf("%f\n", arr[i]);
	}
}


void add_to(double ar[], int n, double val) {
	
		int i ; 
		for (i = 0 ; i < n; i ++)
			ar[i] += val;
	
		
}