#include <stdio.h>

// print the following pattern:
// 5 5 5 5 5
//   4 4 4 4
//     3 3 3
//       2 2
//         1

int main() {
	// declarations
	int n, i, j, k;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= (n - i); j++) {
			printf("  ");
		}
		for (k = n; k > (n - i); k--) {
			printf("%d ", i);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
