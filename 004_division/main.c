#include <stdio.h>

// Write a program to divide two numbers from the user and print the output

int main() {
	// declarations
	int num1, num2;
	float quot;

	// input
	printf("Calculating a / b");
	printf("\na = ");
	scanf("%d", &num1);
	printf("b = ");
	scanf("%d", &num2);

	// calculations
	quot = (float) num1 / num2;

	// output
	printf("Sum (a / b) = %f", quot);

	// exit with code 0
	return 0;
}
