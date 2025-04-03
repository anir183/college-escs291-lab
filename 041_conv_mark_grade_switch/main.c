#include <stdio.h>

// convert marks to grade as per makaut regulations using switch

int main() {
	// declarations
	int marks;

	// input
	printf("Enter the marks: ");
	scanf_s("%d", &marks);

	// calculations and output
	switch (marks / 10) {
		// (90 to 100) / 10 = (9 to 10)
		case 10:
		case 9:
			printf("Grade = O");
			break;

		// (80 to 89) / 10 = 8
		case 8:
			printf("Grade = E");
			break;

		// (70 to 79) / 10 = 7
		case 7:
			printf("Grade = A");
			break;

		// (60 to 69) / 10 = 6
		case 6:
			printf("Grade = B");
			break;

		// (50 to 59) / 10 = 5
		case 5:
			printf("Grade = C");
			break;

		// (40 to 49) / 10 = 4
		case 4:
			printf("Grade = D");
			break;

		// 40-
		default:
			printf("Grade = F");
	}

	// exit with code 0
	return 0;
}
