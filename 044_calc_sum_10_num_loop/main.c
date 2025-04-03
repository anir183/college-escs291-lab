#include <stdio.h>

// calculate the sum of 10 numbers entered by user using for loop

int main() {
	// declarations
	int sum = 0, num, i;

	// input and calculation
	printf("Enter 10 natural numbers:\n");
	for (i = 0; i < 10; i++) {
		printf("%d: ", i + 1);
		scanf_s("%d", &num);
		sum += num;
	}

	// output
	printf("\nSum = %d", sum);

	// exit with code 0
	return 0;
}
