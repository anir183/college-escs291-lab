#include <stdio.h>

// find max of 3 numbers

int main() {
	// declarations
	int num1, num2, num3, max;

	// input
	printf("Enter first number: ");
	scanf_s("%d", &num1);
	printf("Enter second number: ");
	scanf_s("%d", &num2);
	printf("Enter third number: ");
	scanf_s("%d", &num3);

	// calculations
	max = num1;
	if (num1 > num2 && num1 > num3) {
		max = num1;
	} else if (num2 > num1 && num2 > num3) {
		max = num2;
	} else if (num3 > num1 && num3 > num2) {
		max = num3;
	} else if (num1 > num2) {
		max = num1;
	} else if (num2 > num3) {
		max = num2;
	} else if (num3 > num1) {
		max = num3;
	}

	// output
	printf("\nMax = %d", max);

	// exit with code 0
	return 0;
}
