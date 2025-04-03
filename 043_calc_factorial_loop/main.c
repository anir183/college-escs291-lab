#include <stdio.h>

// calculate the factorial of a number using for loop

int main() {
	// declarations
	int num, i;
	long fact = 1;

	// input
	printf("Enter a number: ");
	scanf_s("%d", &num);

	// calculation
	for (i = 1; i <= num; i++) {
		fact *= i;
	}

	// output
	printf("Factorial = %ld", fact);

	// exit with code 0
	return 0;
}
