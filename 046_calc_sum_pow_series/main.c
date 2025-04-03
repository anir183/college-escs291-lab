#include <math.h>
#include <stdio.h>

// calculate result of series: 1 + x + x^2 + x^3 + ... + x^n

int main() {
	// declarations
	int x, n, i;
	static double sum;

	// input
	printf("x: ");
	scanf_s("%d", &x);
	printf("n: ");
	scanf_s("%d", &n);

	// calculation
	for (i = 0; i <= n; i++)
		sum += pow(x, i);

	// output
	printf("\nSum = %f", sum);

	// exit with code 0
	return 0;
}
