#include <stdio.h>

// print the following pattern:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main() {
	// declarations
	int n, i, j;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++) {
			printf("%d ", (j + i) % 2);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
