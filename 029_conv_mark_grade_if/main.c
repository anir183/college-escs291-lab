#include <stdio.h>

// convert marks to grade as per makaut regulations using ifelse

int main() {
	// declarations
	int marks;

	// input
	printf("Enter the marks: ");
	scanf_s("%d", &marks);

	// calculations and output
	if (marks > 100 || marks < 0) {
		printf("Invalid marks");
	} else if (marks >= 90) {
		printf("Grade = O");
	} else if (marks >= 80) {
		printf("Grade = E");
	} else if (marks >= 70) {
		printf("Grade = A");
	} else if (marks >= 60) {
		printf("Grade = B");
	} else if (marks >= 50) {
		printf("Grade = C");
	} else if (marks >= 40) {
		printf("Grade = D");
	} else {
		printf("Grade = F");
	}

	// exit with code 0
	return 0;
}
