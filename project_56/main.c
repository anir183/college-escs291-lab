#include <stdio.h>

// Write a program to calculate the non-fibonacci series in a range

int main() {
	// declarations
	int lower, upper, last = 1, i, j;

	// input
	printf("Enter a lower bound: ");
	scanf("%d", &lower);
	printf("Enter a upper bound: ");
	scanf("%d", &upper);

	// calculations and output
	printf("The required numbers are:\n");
	for (i = 0; i <= upper; i += last, last = i - last) {
		if (i <= lower) {
			continue;
		}

		j = lower <= last ? last + 1 : lower;
		for (; j < i; j++, lower = i + 1) {
			printf("%d  ", j);
		}

		if (i + last > upper) {
			i = ++upper - last;
		}
	}
	
	// exit with code 0
	return 0;
}
