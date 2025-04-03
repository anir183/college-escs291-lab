#include <stdio.h>

// print the following pattern using a while loop:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main() {
	// declaration
	int n, i = 0, j = 0, k = 1;

	// input
	printf("n: ");
	scanf_s("%d", &n);

	// calculations and output
	printf("\nRequired pattern:\n");
	while (i < n) {
		j = 0;
		while (j <= i) {
			printf("%d ", k++);
			j++;
		}
		printf("\n");
		i++;
	}

	// exit with code 0
	return 0;
}
