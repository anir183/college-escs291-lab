#include <stdio.h>

// Write a program to check if a triangle is valid using the angles from user

int main() {
	// declarations
	int angle1, angle2, angle3;

	// input
	printf("Enter the angles of a triangle (eg 20,90,70): ");
	scanf("%d,%d,%d", &angle1, &angle2, &angle3);

	// check and output
	if (angle1 + angle2 + angle3 == 180) {
		if (angle1 > 0 && angle2 > 0 && angle3 > 0) {
			printf("Valid triangle!");
		}
		else {
			printf("Invalid triangle");
		}
	}
	else {
		printf("Invalid triangle");
	}

	// exit with code 0
	return 0;
}
