#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#define MAX_COUNT 50


double Sum(double x[], size_t n){
	double sum = 0;
	for(size_t i = 0; i < n; ++i){
		sum += x[i];
	}
	return sum;
}


// Function to calculate the average of array elements
double Average(double x[], size_t n){
	return Sum(x, n) / n;
}


// Function to read in data items and store in data array
// The function returns the number of items stored 
size_t GetData(double *data, size_t max_count){
	size_t nValues = 0;
	printf("How many values do you want to enter (Maximum %zd) ?", max_count);
	
	nValues = 5;
	if(nValues > max_count){
		printf("Maximum count exceeded. %zd items will be read.", max_count);
		nValues = max_count;
	}
	for (size_t i = 0; i < nValues; ++i){
		scanf("%lf", &data[i]);
	}
	return nValues;
}

int main(int argc, char *argv[]) {
	double samples[MAX_COUNT] = {0.0};
	size_t sampleCount = GetData(samples, MAX_COUNT);
	double average = Average(samples, sampleCount);
	printf("The average of the values you entered is : %.2lf\n", average);
	return 0; 
}