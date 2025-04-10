#include <stdio.h>

// calculate result of series: 1 + 1/2 + 1/3 + .. + 1/n

int main() {
	// declarations
	int n, i;
	float sum = 0;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculation
	for (i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}

	// output
	printf("\nSum = %f", sum);

	// exit with code 0
	return 0;
}
