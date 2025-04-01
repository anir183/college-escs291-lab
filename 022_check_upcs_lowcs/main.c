#include <stdio.h>

// check if character is uppercase or lowercase

int main() {
	// declarations
	char alph;

	// input
	printf("Enter an alphabet: ");
	scanf("%c", &alph);

	// check and output
	if (alph >= 'a' && alph <= 'z') {
		printf("The alphabet is in Lowercase.");
	} else if (alph >= 'A' && alph <= 'Z') {
		printf("The alphabet is in Uppercase.");
	} else {
		printf("The character is NOT an alphabet.");
	}

	// exit with code 0
	return 0;
}
