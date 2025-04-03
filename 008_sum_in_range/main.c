#include <stdio.h>

// calculate sum of all numbers in a range

int main() {
	// declarations
	int lower, upper, sum = 0, i;

	// input
	printf("Lower limit: ");
	scanf_s("%d", &lower);
	printf("Upper limit: ");
	scanf_s("%d", &upper);

	// calculations
	i = lower;
	while (i <= upper) {
		sum += i;
		i++;
	}

	// output
	printf("\nSum = %d", sum);

	// exit with code 0
	return 0;
}
