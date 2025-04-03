#include <stdio.h>

// calculate the fibonacci series in a range using a function

// function prototypes
void display_fibonacci(int, int);

// main func - entry point
int main() {
	// declarations
	int lower, upper, last = 1, i;

	// input
	printf("Enter a lower bound: ");
	scanf_s("%d", &lower);
	printf("Enter a upper bound: ");
	scanf_s("%d", &upper);

	// output
	display_fibonacci(lower, upper);

	// exit with code 0
	return 0;
}

// function definitions
void display_fibonacci(int low, int up) {
	int last = 1, i;

	printf("\nThe required part of the fibonacci series is:\n");
	for (i = 0; i <= up; i += last, last = i - last) {
		if (i >= low) {
			printf("%d  ", i);
		}
	}
}
