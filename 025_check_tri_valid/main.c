#include <stdio.h>

// check angles and verify if triangle is valid

int main() {
	// declarations
	int angle1, angle2, angle3;

	// input
	printf("Enter the angles of a triangle (eg 20,90,70): ");
	scanf_s("%d,%d,%d", &angle1, &angle2, &angle3);

	// check and output
	if (angle1 + angle2 + angle3 == 180) {
		if (angle1 > 0 && angle2 > 0 && angle3 > 0) {
			printf("Valid triangle!");
		} else {
			printf("Invalid triangle");
		}
	} else {
		printf("Invalid triangle");
	}

	// exit with code 0
	return 0;
}
