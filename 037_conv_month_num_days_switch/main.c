#include <stdio.h>

// convert month number to number of days in that month \[switch\]

int main() {
	// declarations
	int month_num;

	// input
	printf("Enter the month number (1-12): ");
	scanf_s("%d", &month_num);

	// output
	switch (month_num) {
		case 2:
			printf("The month has 28 or 29 days");
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("The month has 31 days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The month has 30 days");
			break;
		default:
			printf("Invalid month");
	}

	// exit with code 0
	return 0;
}
