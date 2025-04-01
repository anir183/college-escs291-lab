#include <stdio.h>

// check if a number is krishnamurty or not

int main() {
	// declarations
	int i, j;
	long num, fact, factSum = 0;

	// input
	printf("Enter a number: ");
	scanf("%ld", &num);

	// calculations
	for (i = num; i > 0; i /= 10) {
		fact = 1;
		for (j = 1; j <= i % 10; j++) {
			fact *= j;
		}
		factSum += fact;
	}

	// checks and output
	if (factSum == num) {
		printf("The number is Krishnamurty");
	} else {
		printf("The number is NOT Krishnamurty");
	}

	// exit with code 0
	return 0;
}
