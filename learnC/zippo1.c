#include <stdio.h>

int main(int argc, char *argv[]) {

	int zippo1[2][4] = {{ 1, 2, 3, 4}	, {5,6,7,8}};
	
	//printf("%d", zippo1[1][3]); // 8
	
	
	int zippo[4][2] = { {2,4}, {6,8}, {1, 3}, {5,7}};
	
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	
	
	
	printf(" zippo[2][1] = %d \n", zippo[2][1]);
	
	
	printf(" zippo[2][1] = %d \n",  *( *(zippo + 2) + 1 ) );
	
}