#include <stdio.h>

// calculate the factorial of a number using for loop

int main() {
	// declarations
	int num, i;
	long long fact = 1;

	int *num_ptr = &num;
	long long *fact_ptr = &fact;

	// input
	printf("Enter a number: ");
	scanf_s("%d", num_ptr);

	// calculation
	for (i = 1; i <= *num_ptr; i++) {
		*fact_ptr *= i;
	}

	// output
	printf("Factorial = %lld", *fact_ptr);

	// exit with code 0
	return 0;
}
