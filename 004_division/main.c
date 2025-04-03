#include <stdio.h>

// perform division

int main() {
	// declarations
	int num1, num2;
	float quot;

	// input
	printf("Calculating a / b");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// calculations
	quot = (float)num1 / num2;

	// output
	printf("Sum (a / b) = %f", quot);

	// exit with code 0
	return 0;
}
