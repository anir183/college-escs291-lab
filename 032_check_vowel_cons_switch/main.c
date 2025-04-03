#include <stdio.h>

// check whether vowel or consonant using switch

int main() {
	// declarations
	char alph;

	// input
	printf("Enter an alphabet: ");
	scanf_s("%c", &alph);

	// check and output
	switch (alph) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("The alphabet is a Vowel.");
			break;
		default:
			printf("The alphabet is a Consonant.");
	}

	// exit with code 0
	return 0;
}
