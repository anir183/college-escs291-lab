#include <stdio.h>

// calculate factorial of a given number

int main() {
	// declarations
	int num, i;
	long long fact = 1;

	// input
	printf("Enter a number: ");
	scanf_s("%d", &num);

	// calculations
	i = 1;
	while (i <= num) {
		fact *= i;
		i++;
	}

	// output
	printf("Factorial = %lld", fact);

	// exit with code 0
	return 0;
}
