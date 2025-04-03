#include <stdio.h>

// swap 2 numbers without variable

int main() {
	// declarations
	int num1, num2, temp;

	// input
	printf("Swap");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// before
	printf("\nBefore swapping, a = %d and b = %d", num1, num2);

	// swapping
	temp = num1;
	num1 = num2;
	num2 = temp;

	// after
	printf("\nAfter swapping, a = %d and b = %d", num1, num2);

	// exit with code 0
	return 0;
}
