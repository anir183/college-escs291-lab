#include <stdio.h>

// check if number is +ve, -ve or 0

int main() {
	// declarations
	int num;

	// input
	printf("Enter a number: ");
	scanf_s("%d", &num);

	// check and output
	if (num > 0) {
		printf("The number is positive.");
	} else if (num < 0) {
		printf("The number is negative.");
	} else {
		printf("The number is zero.");
	}

	// exit with code 0
	return 0;
}
