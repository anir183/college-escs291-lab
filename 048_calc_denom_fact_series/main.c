#include <math.h>
#include <stdio.h>

// calculate result of series: 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!

int main() {
	// declarations
	int x, n, i;
	double sum = 1, fact = 1;

	// input
	printf("x: ");
	scanf("%d", &x);
	printf("n: ");
	scanf("%d", &n);

	// calculation
	for (i = 1; i <= n; i++) {
		fact *= i;
		sum += pow(x, i) / fact;
	}

	// output
	printf("\nSum = %f", sum);

	// exit with code 0
	return 0;
}
