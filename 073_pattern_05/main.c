#include <stdio.h>

// print the following pattern:
// 1
// 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4 4 4

int main() {
	// declarations
	int rows, i, j;

	// input
	printf("Rows: ");
	scanf_s("%d", &rows);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= (2 * i - 1); j++) {
			printf("%d ", i);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
