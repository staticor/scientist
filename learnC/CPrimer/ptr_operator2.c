#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int urn[5] = {100, 200, 300, 400, 500};
	
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = urn;
	
	ptr2 = &urn[2];
	
	puts("pointer value, defreferenced pointer, pointer address:\n");
	
	
	// pointer1
	
	
	printf("ptr1 = %p , *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	
	
	// pointer add.
	ptr3 = ptr1 + 4;
	
	printf("");
	
	printf("ptr3 = %p , *ptr3 = %d, &ptr3 = %p\n", ptr3, *ptr3, &ptr3);
	
	
	// incremental pointer
	int *newp = ptr1 ++;
	puts("p1 , after incremental");
	printf("newp = %p, *newp= %d, &newp= %p\n", newp, *newp, &newp);
	printf("ptr1 = %p , *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
}