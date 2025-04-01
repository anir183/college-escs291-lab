#include <stdio.h>

// convert m or f to male of female using switch

int main() {
	// declarations
	char ch;

	// input
	printf("Enter the gender character (M/F): ");
	scanf("%c", &ch);

	// output
	switch (ch) {
		case 'm':
		case 'M':
			printf("Male");
			break;
		case 'f':
		case 'F':
			printf("Female");
			break;
		default:
			printf("Other or Invalid gender");
	}

	// exit with code 0
	return 0;
}
