#include <stdio.h>

// Write a program to swap two numbers from user using a third variable

int main() {
	// declarations
	int num1, num2, temp;
	
	// input
	printf("Swap");
	printf("\na = ");
	scanf("%d", &num1);
	printf("b = ");
	scanf("%d", &num2);

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
