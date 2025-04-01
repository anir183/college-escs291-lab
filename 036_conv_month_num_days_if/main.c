#include <stdio.h>

// convert month number to number of days in that month using ifelse

int main() {
	// declarations
	int month_num;

	// input
	printf("Enter the month number (1-12): ");
	scanf("%d", &month_num);

	// output
	if (month_num > 12 || month_num < 1) {
		printf("Invalid month");
	} else if (month_num == 2) {
		printf("The month has 28 or 29 days");
	} else if ((month_num % 2 == 0 && month_num >= 8) ||
	           (month_num % 2 != 0 && month_num < 8)) {
		printf("The month has 31 days");
	} else {
		printf("The month has 30 days");
	}

	// exit with code 0
	return 0;
}
