#include <stdio.h>

// print the following pattern:
// A
// B B
// C C C
// D D D D
// E E E E E

int main() {
	// declarations
	int n, i, j;

	// input
	printf("n: ");
	scanf_s("%d", &n);
	n += 'A';

	// calculations and output
	printf("\nRequired pattern:\n");
	for (i = 'A'; i <= n; i++) {
		for (j = 'A'; j <= i; j++) {
			printf("%c ", i);
		}
		printf("\n");
	}

	// exit with code 0
	return 0;
}
