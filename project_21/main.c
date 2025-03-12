#include <stdio.h>

// Write a program to check if a character from user is an alphabet, digit or special character

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
	else if (ch >= '0' && ch <= '9') {
		printf("The character is a Number.");
	}
	else {
		printf("The character is a Special Character.");
	}

	// exit with code 0
	return 0;
}
