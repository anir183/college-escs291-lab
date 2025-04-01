#include <stdio.h>

// Write a program to check is a year from user is leap or not

int main() {
	// declarations
	int year;

	// input
	printf("Enter a year: ");
	scanf("%d", &year);

	// check and output
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("The year is a Leap year.");
	}
	else {
		printf("The year is NOT a Leap year.");
	}

	// exit with code 0
	return 0;
}
