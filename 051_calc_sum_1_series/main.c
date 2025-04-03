#include <stdio.h>

// calculate result of series: 1 + 11 + 111 + 1111 + ...

int main() {
	// declarations
	int n, sum = 0, i;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculation
	for (i = 1; i <= n; i = (i * 10 + 1))
		sum += i;

	// output
	printf("\nSum = %d", sum);

	// exit with code 0
	return 0;
}
