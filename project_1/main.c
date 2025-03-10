#include <stdio.h>

// Write a program to add two numbers from the user and print the output

int main() {
	// declarations
	int num1, num2, sum;

	// input
	printf("Calculate a + b:");
	printf("\na = ");
	scanf("%d", &num1);
	printf("b = ");
	scanf("%d", &num2);

	// calculations
	sum = num1 + num2;

	// output
	printf("\nSum (a + b) = %d", sum);

	// exit with code 0
	return 0;
}
