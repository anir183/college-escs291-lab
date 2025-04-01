#include <stdio.h>

// Write a program to check if an alphabet from user is a vowel or consonant

int main() {
	// declarations
	char alph;

	// input
	printf("Enter an alphabet: ");
	scanf("%c", &alph);

	// check and output
	alph = alph > 'Z' ? alph - 32 : alph;
	if (alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U') {
		printf("The alphabet is a Vowel.");
	}
	else if (alph >= 'A' && alph <= 'Z') {
		printf("The alphabet is a Consonant.");
	}
	else {
		printf("The character is NOT an alphabet.");
	}

	// exit with code 0
	return 0;
}
