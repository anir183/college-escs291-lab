#include <stdio.h>

// Write a program to print the gender given character from user

int main() {
	// declarations
	char ch;

	// input
	printf("Enter the gender character (M/F): ");
	scanf("%c", &ch);

	// output
	if (ch == 'm' || ch == 'M') {
		printf("Male");
	}
	else if (ch == 'f' || ch == 'F') {
		printf("Female");
	}
	else {
		printf("Other or Invalid gender");
	}

	// exit with code 0
	return 0;
}
