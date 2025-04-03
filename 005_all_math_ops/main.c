#include <stdio.h>

// perform all mathematical operations (consisting of 1-4)

int main() {
	// declarations
	int num1, num2, sum, diff, prod;
	float quot;

	// input
	printf("Calculate a + b, a - b, a * b and a / b:");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// calculations
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot = (float)num1 / num2;

	// output
	printf("\nSum (a + b) = %d", sum);
	printf("\nDifference (a - b) = %d", diff);
	printf("\nProduct (a * b) = %d", prod);
	printf("\nQuotient (a / b) = %f", quot);

	// exit with code 0
	return 0;
}
