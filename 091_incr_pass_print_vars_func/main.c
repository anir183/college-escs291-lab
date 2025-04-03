#include <stdio.h>

// declare 2 un-scanned variables, pass to function, increment them and print
// them in main and the function itself

// function prototypes
void increment(int *, int *);

// main func - entry point
int main() {
	// declarations
	int num1, num2;

	// input
	printf("1st Number: ");
	scanf_s("%d", &num1);
	printf("2nd Number: ");
	scanf_s("%d", &num2);

	increment(&num1, &num2);

	// output
	printf("The incremented numbers are %d and %d", num1, num2);

	// exit with code 0
	return 0;
}

// function definitions
void increment(int *n1_ptr, int *n2_ptr) {
	*n1_ptr = *n1_ptr + 1;
	*n2_ptr = *n2_ptr + 1;
}
