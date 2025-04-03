#include <stdio.h>

// swap two values using both call by value and call by reference

// function prototypes
void swap(int *, int *);

int main() {
	// declarations
	int num1, num2;

	// input
	printf("1st Number: ");
	scanf_s("%d", &num1);
	printf("2nd Number: ");
	scanf_s("%d", &num2);

	// output
	printf("\nGiven, a = %d and b = %d", num1, num2);
	swap(&num1, &num2);
	printf("\nAfter swap, a = %d and b = %d", num1, num2);

	// exit with code 0
	return 0;
}

// function definitions
void swap(int *n1_ptr, int *n2_ptr) {
	int temp = *n1_ptr;
	*n1_ptr = *n2_ptr;
	*n2_ptr = temp;
}
