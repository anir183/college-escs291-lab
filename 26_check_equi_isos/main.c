#include <stdio.h>

// Write a program to check if a triangle from user is equilateral or isosceles

int main() {
	// declarations
	int val1, val2, val3;

	// input
	printf("Enter the angles OR sides of the triangle (eg 3,4,5 or 90,45,45): ");
	scanf("%d,%d,%d", &val1, &val2, &val3);

	// check and output
	if (val1 == val2 && val2 == val3) {
		printf("Equilateral triangle!");
	}
	else if (val1 == val2 || val2 == val3 || val1 == val3) {
		printf("Isosceles triangle!");
	}
	else {
		printf("Neither equilateral nor isosceles");
	}

	// exit with code 0
	return 0;
}
