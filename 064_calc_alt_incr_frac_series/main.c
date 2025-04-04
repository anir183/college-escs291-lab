#include <stdio.h>

// calculate result of series: 1/2 + 2/3 + 2/4 + .. + n/n + 1

int main() {
	// declarations
	int i;
	float n, sum = 0;

	// input
	printf("n: ");
	scanf_s("%f", &n);

	// calculation
	for (i = 1; i <= n; i++) {
		sum += n / (n + 1);
	}

	// output
	printf("\nSum = %f", sum);

	// exit with code 0
	return 0;
}
