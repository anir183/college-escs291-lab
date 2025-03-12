#include <stdio.h>

// Write a program to print the product of 10 user provided natural numbers

int main() {
	// declarations
	int prod = 1, num, i;

	// input and calculation
	printf("Enter 10 natural numbers:\n");
	for (i = 0; i < 10; i++) {
		printf("%d: ", i + 1);
		scanf("%d", &num);
		prod *= num;
	}

	// output
	printf("\nProduct = %d", prod);

	// exit with code 0
	return 0;
}
