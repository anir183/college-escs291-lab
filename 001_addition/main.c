#include <stdio.h>

// perform addition

int main() {
	// declarations
	int num1, num2, sum;

	// input
	printf("Calculate a + b:");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// calculations
	sum = num1 + num2;

	// output
	printf("\nSum (a + b) = %d", sum);

	// exit with code 0
	return 0;
}
