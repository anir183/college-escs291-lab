#include <stdio.h>

// check if number is divisible by 5 and 11

int main() {
	// declarations
	int num;

	// input
	printf("Enter a number: ");
	scanf_s("%d", &num);

	// check and output
	if (num % 5 == 0 && num % 11 == 0) {
		printf("The number is divisible by 5 AND 11");
	} else {
		printf("The number is NOT divisible by 5 AND 11");
	}

	// exit with code 0
	return 0;
}
