#include <stdio.h>

// Write a program to check whether a program is Palindrome or not.

int main() {
	// declarations
	int num, i;
	static long rev;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);

	// calculations
	for (i = num; i > 0; i /= 10) {
		rev = rev * 10 + i % 10;
	}

	// checks and output
	if (rev == num) {
		printf("The number is Palindrome");
	}
	else {
		printf("The number is NOT Palindrome.");
	}

	// exit with code 0
	return 0;
}
