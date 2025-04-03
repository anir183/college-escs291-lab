#include <stdio.h>

// print the following pattern:
//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

int main() {
	// declarations
	int rows, i, j, k, l;

	// input
	printf("Rows: ");
	scanf_s("%d", &rows);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= (rows - i); j++) {
			printf("  ");
		}
		for (k = (rows - i + 1); k <= rows; k++) {
			printf("%d ", k);
		}
		for (l = rows - 1; l >= (rows - i + 1); l--) {
			printf("%d ", l);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
