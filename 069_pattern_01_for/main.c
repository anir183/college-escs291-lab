#include <stdio.h>

// print the following pattern using a for loop:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main() {
	// declaration
	int n, i, j, k = 1;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d ", k++);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
