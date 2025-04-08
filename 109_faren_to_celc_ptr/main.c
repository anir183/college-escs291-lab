#include <stdio.h>

// convert farenheit to celcius using pointers

int main() {
	// declarations
	float farenheit, celcius;
	float *far_ptr = &farenheit, *cel_ptr = &celcius;

	// input
	printf("Enter farenheit temp: ");
	scanf_s("%f", far_ptr);

	// calculations
	*cel_ptr = (*far_ptr - 32) * 5 / 9;

	// output
	printf("Celcius = %f", *cel_ptr);

	// exit with code 0
	return 0;
}
