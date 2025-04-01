#include <stdio.h>

// find out the number of odd and even numbers in a range and add each alternate
// set of odd and even numbers together

int main() {
	// declarations
	int lower, upper, evenSum = 0, oddSum = 0, i;

	// input
	printf("Enter a lower bound: ");
	scanf("%d", &lower);
	printf("Enter a upper bound: ");
	scanf("%d", &upper);

	// calculations and output
	printf("\nThe even numbers are:\n");
	for (i = lower; i <= upper; i++) {
		if (i % 2 == 0) {
			printf("%d  ", i);
			evenSum += i;
		}
	}
	printf("\nSum of even numbers: %d\n", evenSum);
	printf("\nThe odd numbers are:\n");
	for (i = lower; i <= upper; i++) {
		if (i % 2 != 0) {
			printf("%d  ", i);
			oddSum += i;
		}
	}
	printf("\nSum of odd numbers: %d\n", oddSum);

	// exit with code 0
	return 0;
}
