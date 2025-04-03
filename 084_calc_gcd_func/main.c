#include <stdio.h>

// calculate the gcd of two numbers using a function

// function prototypes
int calc_gcd(int, int);

// main func - entry point
int main() {
	// declarations
	int num1, num2;

	// input
	printf("1st Number: ");
	scanf_s("%d", &num1);
	printf("2nd Number: ");
	scanf_s("%d", &num2);

	// output
	printf("\nGCD = %d", calc_gcd(num1, num2));

	// exit with code 0
	return 0;
}

// function definitions
int calc_gcd(int num1, int num2) {
	// make sure the smaller number is always num1
	if (num1 > num2) {
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}

	int i, gcd = 1;
	for (i = 2; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}

	return gcd;
}
