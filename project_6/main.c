#include <stdio.h>

// Write a program to print all the natural numbers in a range from the user

int main() {
	// declarations
	int lower, upper, i;
	
	// input
	printf("Lower limit: ");
	scanf("%d", &lower);
	printf("Upper limit: ");
	scanf("%d", &upper);
	
	// output
	i = lower;
	printf("\nThe required numbers are: ");
	while (i <= upper) {
		printf("%d  ", i);
		i++;
	}

	// exit with code 0
	return 0;
}
