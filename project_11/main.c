#include <stdio.h>

// Write a program to convert farenheit temperature from user to celcius

int main()
{
	// declarations
	float farenheit, celcius;
	
	// input
	printf("Enter farenheit temp: ");
	scanf("%f", &farenheit);
	
	// calculations
	celcius = (farenheit - 32) * 5 / 9;
	
	// output
	printf("Celcius = %f", celcius);
	
	// exit with code 0
	return 0;
}
