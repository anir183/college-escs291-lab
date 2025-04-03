#include <stdio.h>

// find all natural numbers in a range

int main() {
	// declarations
	int lower, upper, i;

	// input
	printf("Lower limit: ");
	scanf_s("%d", &lower);
	printf("Upper limit: ");
	scanf_s("%d", &upper);

	// output
	i = lower;
	printf("\nThe required numbers are: ");
	while (i <= upper) {
		printf("%d  ", i);
		i++;
	}

	// exit with code 0
	return 0;
}
