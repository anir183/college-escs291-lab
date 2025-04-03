#include <stdio.h>

// convert m or f to male of female using ifelse

int main() {
	// declarations
	char ch;

	// input
	printf("Enter the gender character (M/F): ");
	scanf_s("%c", &ch);

	// output
	if (ch == 'm' || ch == 'M') {
		printf("Male");
	} else if (ch == 'f' || ch == 'F') {
		printf("Female");
	} else {
		printf("Other or Invalid gender");
	}

	// exit with code 0
	return 0;
}
