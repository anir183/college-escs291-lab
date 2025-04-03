#include <stdio.h>

// print the following pattern:
// (1, 1) (1, 2) (1, 3) ... (1, n)
// (2, 1) (2, 2) (2, 3) ... (2, n)
// .
// .
// .
// (n, 1) (n, 2) (n, 3) ... (n, n)

int main() {
	// declarations
	int n, i, j;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculation and output
	printf("\nRequired pattern:\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
