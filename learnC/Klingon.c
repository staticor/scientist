#include <stdio.h>


int main(int argc, char *argv[]) {
	char *p1 = "Klingon";
	p1[0] = 'F';  // ok ?
	printf("Klingon");
	
	// Klingo is not exists! 
	// 字面值被修改. 
	printf(": Beware the %ss!\n", "Klingon");
		
		
		// 下面看推荐用法
	
	const char *p2 = "Klingon"; // recommended usage
	
	p2[0] = 'F'; // not assignable  produce error. 
	
	
}