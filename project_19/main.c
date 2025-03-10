#include <stdio.h>

// Write a program to check if a character from user is an alphabet or not

int main() {
	// declarations
	char ch;
	
	// input
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	// check and output
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		printf("The character is an Alphabet.");
	}
	else {
		printf("The character is NOT an Alphabet.");
	}
	
	// exit with code 0
	return 0;
}
