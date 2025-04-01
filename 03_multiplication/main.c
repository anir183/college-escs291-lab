#include <stdio.h>

// Write a program to multiply two numbers from the user and print the output

int main() {
	// declarations
	int num1, num2, prod;

	// input
	printf("Calculate a * b:");
	printf("\na = ");
	scanf("%d", &num1);
	printf("b = ");
	scanf("%d", &num2);

	// calculations
	prod = num1 * num2;

	// output
	printf("\nProduct (a * b) = %d", prod);

	// exit with code 0
	return 0;
}
