#include <stdio.h>

// print the pascal triange using a function:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// function prototypes
void display_pascal(int);

// main func - entry point
int main() {
	// declarations
	int n;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// output
	display_pascal(n);

	// exit with code 0
	return 0;
}

// function definitions
void display_pascal(int n) {
	int tri_mtrx[n][n];
	int i, j;

	// NOTE : we can calculate and display together, but i just wanted to
	// seperate them

	// calculate
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j) {
				tri_mtrx[i][j] = 1;
				continue;
			}

			if (j <= i) {
				tri_mtrx[i][j] = tri_mtrx[i - 1][j - 1] + tri_mtrx[i - 1][j];
			}
		}
	}

	// display
	printf("\nRequired Pascal triangle:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d ", tri_mtrx[i][j]);
		}
		printf("\n");
	}
}
