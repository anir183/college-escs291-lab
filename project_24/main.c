#include <stdio.h>

// Write a program to print the week day name from the week day number from user

int main() {
	// declarations
	int day_num;

	// input
	printf("Enter a week day number (1-7): ");
	scanf("%d", &day_num);

	// output
	if (day_num == 1) {
		printf("Monday!");
	}
	else if (day_num == 2) {
		printf("Tuesday!");
	}
	else if (day_num == 3) {
		printf("Wednesday!");
	}
	else if (day_num == 4) {
		printf("Thurday!");
	}
	else if (day_num == 5) {
		printf("Friday!");
	}
	else if (day_num == 6) {
		printf("Saturday!");
	}
	else if (day_num == 7) {
		printf("Sunday!");
	}
	else {
		printf("Invalid week day");
	}

	// exit with code 0
	return 0;
}
