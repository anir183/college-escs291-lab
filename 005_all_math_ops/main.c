#include <stdio.h>

// Write a program to perform all mathematical operations on two numbers from the user and print the output

int main() {
	// declarations
	int num1, num2, sum, diff, prod;
	float quot;

	// input
	printf("Calculate a + b, a - b, a * b and a / b:");
	printf("\na = ");
	scanf("%d", &num1);
	printf("b = ");
	scanf("%d", &num2);

	// calculations
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot = (float) num1 / num2;

	//output
	printf("\nSum (a + b) = %d", sum);
	printf("\nDifference (a - b) = %d", diff);
	printf("\nProduct (a * b) = %d", prod);
	printf("\nQuotient (a / b) = %f", quot);

	// exit with code 0
	return 0;
}
