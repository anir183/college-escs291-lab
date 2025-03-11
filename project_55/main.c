#include <stdio.h>

// Write a program to calculate the fibonacci series in a range.

int main() {
	// declarations
	int lower, upper, last = 1, i;

	// input
	printf("Enter a lower bound: ");
	scanf("%d", &lower);
	printf("Enter a upper bound: ");
	scanf("%d", &upper);

	// calculations and output
	printf("The required part of the fibonacci series is:\n");
	for (i = 0; i <= upper; i += last, last = i - last) {
		if (i >= lower) {
			printf("%d  ", i);
		}
	}
	
	// exit with code 0
	return 0;
}
