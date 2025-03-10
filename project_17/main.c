#include <stdio.h>

// Write a program to check if a number from user is odd or even

int main() {
	// declarations
	int num;
	
	// input
	printf("Enter a number: ");
	scanf("%d", &num);
	
	// check output
	if (num % 2 == 0) {
		printf("The number is EVEN");
	}
	else {
		printf("The number is ODD");
	}
	
	// exit with code 0
	return 0;
}
