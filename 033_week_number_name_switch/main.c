#include <stdio.h>

// convert week-day number to week-day name using switch

int main() {
	// declarations
	int day_num;

	// input
	printf("Enter a week day number (1-7): ");
	scanf("%d", &day_num);

	// output
	switch (day_num) {
		case 1:
			printf("Monday!");
			break;
		case 2:
			printf("Tuesday!");
			break;
		case 3:
			printf("Wednesday!");
			break;
		case 4:
			printf("Thurday!");
			break;
		case 5:
			printf("Friday!");
			break;
		case 6:
			printf("Saturday!");
			break;
		case 7:
			printf("Sunday!");
			break;
		default:
			printf("Invalid week day");
	}

	// exit with code 0
	return 0;
}
