#include <stdio.h>

// print the values and adress of two variables using a pointer

int main() {
	// declarations
	int var1, var2;
	int *v1_ptr = &var1, *v2_ptr = &var2;

	// input
	printf("Enter two numbers (eg: 1, 5): ");
	scanf_s("%d,%d", v1_ptr, v2_ptr);

	// output
	printf("The values are %d and %d", *v1_ptr, *v2_ptr);
	printf("\nThe adresses are %p and %p", v1_ptr, v2_ptr);

	// return with code 0
	return 0;
}
