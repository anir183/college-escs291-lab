#include <stdio.h>

// print the following pattern:
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

int main() {
	// declarations
	int n, i, j;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = n; i >= 1; i--) {
		for (j = i; j <= n; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
