#include <stdio.h>

// Write a program to check if a number from user is positive, negative or zero

int main() {
	// declarations
	int num;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);

	// check and output
	if (num > 0) {
		printf("The number is positive.");
	}
	else if (num < 0) {
		printf("The number is negative.");
	}
	else {
		printf("The number is zero.");
	}

	// exit with code 0
	return 0;
}
