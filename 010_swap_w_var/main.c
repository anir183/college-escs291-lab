#include <stdio.h>

// swap 2 numbers with variable

int main() {
	// declarations
	int num1, num2;

	// input
	printf("Swap");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("b = ");
	scanf_s("%d", &num2);

	// before
	printf("\nBefore swapping, a = %d and b = %d", num1, num2);

	// swapping
	num1 += num2;
	num2 = num1 - num2;
	num1 -= num2;

	// after
	printf("\nAfter swapping, a = %d and b = %d", num1, num2);

	// exit with code 0
	return 0;
}
