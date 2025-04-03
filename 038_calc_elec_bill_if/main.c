#include <stdio.h>

// calculate electricity bill using ifelse

int main() {
	// declarations
	int units;
	static float bill;

	// input
	printf("Enter the amount of units consumed: ");
	scanf_s("%d", &units);

	// calculations
	if (units < 0) {
		printf("Invalid unit amount");
	} else if (units <= 50) {
		bill = units * 0.5;
	} else if (units <= 150) {
		bill = 25; // 50 * 0.5
		bill += (units - 50) * 0.7;
	} else if (units <= 250) {
		bill = 95; // 50 * 0.5 + 100 * 0.7
		bill += (units - 150) * 1.2;
	} else if (units <= 350) {
		bill = 215; // 50 * 0.5 + 100 * 0.7 + 100 * 1.2
		bill += (units - 250) * 1.5;
	} else {
		bill = 365; // 50 * 0.5 + 100 * 0.7 + 100 * 1.2 + 100 * 1.5
		bill += (units - 350) * 1.75;
	}
	bill *= 1.2; // 20% surcharge

	// output
	printf("Electricity bill = Rs.%f", bill);

	// exit with code 0
	return 0;
}
