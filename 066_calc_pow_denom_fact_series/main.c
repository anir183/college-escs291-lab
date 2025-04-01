#include <stdio.h>
#include <math.h>

// Write a program to print the sum of series x - x^3/3! + x^5/5! - x^7/7! + ... x^(2n + 1)/(2n + 1)!

int main() {
	// declarations
	int x, n, i, j, k;
	double sum = 1, fact = 1;

	// input
	printf("x: ");
	scanf("%d", &x);
	printf("n: ");
	scanf("%d", &n);

	// calculation
	for (i = 1, j = 2; i <= n; i += 2, j++) {
		fact = 1;
		for (k = 1; k < i; k++) {
			fact *= k;
		}
		sum += pow(-1, j) * pow(x, i) / fact;
	}

	// output
	printf("\nSum = %f", sum);

	// exit with code 0
	return 0;
}
