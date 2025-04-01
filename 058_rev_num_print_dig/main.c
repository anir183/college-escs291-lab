#include <stdio.h>

// Write a program to reverse a number and print the digits.

int main() {
	// declarations
	int num, i;
	static long rev;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);

	// calculations and output
	printf("The digits are: ");
	for (i = num; i > 0; i /= 10) {
		printf("%d ", i % 10);
		rev = rev * 10 + i % 10;
	}
	printf("\nThe reverse is %ld", rev);


	// exit with code 0
	return 0;
}
