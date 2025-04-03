#include <stdio.h>

// calculate the factorial of a number using a function

// function prototypes
long long calc_factorial(int);

// main func - entry point
int main() {
	// declarations
	int num;

	// input
	printf("Number: ");
	scanf_s("%d", &num);

	// output
	printf("Factorial = %lld", calc_factorial(num));

	// exit with code 0
	return 0;
}

// function definitions
long long calc_factorial(int num) {
	long long fact = 1;
	int i;

	for (i = 1; i <= num; i++) {
		fact *= i;
	}

	return fact;
}
