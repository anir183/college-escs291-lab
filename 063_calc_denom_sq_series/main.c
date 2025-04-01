#include <math.h>
#include <stdio.h>

// calculate result of series: 1 + 1/2^2 + 1/3^3 + .. + 1/n^n

int main() {
	// declarations
	int n, i;
	double sum = 0;

	// input
	printf("n: ");
	scanf("%d", &n);

	// calculation
	for (i = 1; i <= n; i++) {
		sum += 1 / pow(i, i);
	}

	// output
	printf("\nSum = %f", sum);

	// exit with code 0
	return 0;
}
