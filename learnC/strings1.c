#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(int argc, char *argv[]) {
	char words[MAXLENGTH] = "I am a string in an array.";
	const char *pt1 = "Something is pointing at me.";
	puts("Here are some strings:");
	
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8] = '^';
	puts(words);
	
	
	char greeting[50] = "Hello, and" "how are " " you  "
	"today !";
	
	puts(greeting);
	return 0;	
}