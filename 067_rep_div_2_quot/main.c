#include <stdio.h>

// repetedly divide a number by two, taking the result as the new number and
// print the quotient each time

int main() {
	// declarations
	int num;

	// input
	printf("Number: ");
	scanf_s("%d", &num);

	// calculation and ouput
	printf("\nQuotients after each division:\n");
	while (num > 0) {
		printf("%d ", num / 2);
		num /= 2;
	}

	// exit with code 0
	return 0;
}
