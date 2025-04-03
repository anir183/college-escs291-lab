#include <stdio.h>

// perform multiplication

int main() {
	// declarations
	int num1, num2, prod;

	// input
	printf("Calculate a * b:");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// calculations
	prod = num1 * num2;

	// output
	printf("\nProduct (a * b) = %d", prod);

	// exit with code 0
	return 0;
}
