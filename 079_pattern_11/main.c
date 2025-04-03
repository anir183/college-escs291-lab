#include <stdio.h>

// print the following pattern:
// A
// B C
// D E F
// G H I J
// K L M N O

int main() {
	// declarations
	int n, i, j, k = 'A';

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%c ", k++);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
