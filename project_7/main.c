#include <stdio.h>

// Write a program to find the factorial of a number from the user

int main() {
	// declarations
	int num, i;
	double fact = 1;
	
	// input
	printf("Enter a number: ");
	scanf("%d", &num);
	
	// calculations
	i = 1;
	while (i <= num) {
		fact *= i;
		i++;
	}
	
	// output
	printf("Factorial = %f", fact);
	
	// exit with code 0
	return 0;
}
