#include <stdio.h>

// Write a program to print the sum of 10 user provided natural numbers

int main() {
	// declarations
	int sum = 0, num, i;

	// input and calculation
	printf("Enter 10 natural numbers:\n");
	for (i = 0; i < 10; i++) {
		printf("%d: ", i + 1);
		scanf("%d", &num);
		sum += num;
	}

	// output
	printf("\nSum = %d", sum);

	// exit with code 0
	return 0;
}
