#include <stdio.h>
extern const double PI;
extern const * MONTHS[] ;
int main(int argc, char *argv[]) {
	while( ++ MONTHS){
		printf("%s", MONTHS);
	}
}