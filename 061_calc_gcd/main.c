#include <stdio.h>

// calculate the gcd of two numbers

int main() {
	// declarations
	int num1, num2, gcd, i;

	// input
	printf("Enter first number: ");
	scanf_s("%d", &num1);
	printf("Enter second number: ");
	scanf_s("%d", &num2);

	// calculations
	if (num1 > num2) {
		num1 += num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}
	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}

	// output
	printf("The GCD is %d", gcd);

	// exit with code 0
	return 0;
}
