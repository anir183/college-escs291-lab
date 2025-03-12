#include <stdio.h>

// Write a program to check if a number from user is divisible by 5 and 11

int main() {
	// declarations
	int num;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);

	// check and output
	if (num % 5 == 0 && num % 11 == 0) {
		printf("The number is divisible by 5 AND 11");
	}
	else {
		printf("The number is NOT divisible by 5 AND 11");
	}

	// exit with code 0
	return 0;
}
