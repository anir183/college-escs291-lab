#include <stdio.h>

// check whether a number is prime or not

int main() {
	// declarations
	int num, i;

	// input
	printf("Enter a number: ");
	scanf_s("%d", &num);

	// check and output
	for (i = 2; i <= (num / 2 + 1); i++) {
		if (num % i == 0) {
			printf("The number is NOT Prime");
			return 0;
		}
	}
	printf("The number is Prime");

	// exit the code 0
	return 0;
}
