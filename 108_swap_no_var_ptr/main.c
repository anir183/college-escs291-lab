#include <stdio.h>

// swap two numbers without using a third variable and using a pointer

int main() {
	// declarations
	int var1, var2;
	int *v1_ptr = &var1, *v2_ptr = &var2;

	// input
	printf("Enter two numbers (eg: 1, 5): ");
	scanf_s("%d,%d", v1_ptr, v2_ptr);

	// swapping
	*v1_ptr = *v1_ptr + *v2_ptr;
	*v2_ptr = *v1_ptr - *v2_ptr;
	*v1_ptr = *v1_ptr - *v2_ptr;

	// output
	printf("The swapped values are %d and %d", *v1_ptr, *v2_ptr);

	// return with code 0
	return 0;
}
