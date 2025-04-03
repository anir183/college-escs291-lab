#include <stdio.h>

// perform subtraction

int main() {
	// declarations
	int num1, num2, diff;

	// input
	printf("Calculate a - b:");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// calculations
	diff = num1 - num2;

	// output
	printf("\nDifference (a - b) = %d", diff);

	// exit with code 0
	return 0;
}
