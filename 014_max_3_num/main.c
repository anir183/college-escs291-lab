#include <stdio.h>

// Write a program to find the max of three numbers from user

int main() {
	// declarations
	int num1, num2, num3, max;

	// input
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("Enter third number: ");
	scanf("%d", &num3);

	// calculations
	max = num1;
	if(num1 > num2 && num1 > num3) {
		max = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		max = num2;
	}
	else if (num3 > num1 && num3 > num2) {
		max = num3;
	}
	else if (num1 > num2) {
		max = num1;
	}
	else if (num2 > num3) {
		max = num2;
	}
	else if (num3 > num1) {
		max = num3;
	}

	// output
	printf("\nMax = %d", max);

	// exit with code 0
	return 0;
}
