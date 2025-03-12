#include <stdio.h>

// Write a program to calculate the electricity bill

int main() {
	// declarations
	int units;
	static float bill;

	// input
	printf("Enter the amount of units consumed: ");
	scanf("%d", &units);

	// calculations
	switch ((units - 1) / 50) {
		// (0 - 1 to 50 - 1) / 50 = 0
		// (-1 to 49) / 50 = 0
		case 0:
			bill = units * 0.5;
			break;
			// (50 to 149) / 50 = (1 to 2)
		case 1:
		case 2:
			bill = 25; // 50 * 0.5
			bill += (units - 50) * 0.7;
			break;
			// (150 to 249) / 50 = (3 to 4)
		case 3:
		case 4:
			bill = 95; // 50 * 0.5 + 100 * 0.7
			bill += (units - 150) * 1.2;
			break;
			// (250 to 349) / 50 = (5 to 6)
		case 5:
		case 6:
			bill = 215; // 50 * 0.5 + 100 * 0.7 + 100 * 1.2
			bill += (units - 250) * 1.5;
			break;
			// 350+
		default:
			bill = 365; // 50 * 0.5 + 100 * 0.7 + 100 * 1.2 + 100 * 1.5
			bill += (units - 350) * 1.75;
	}
	bill *= 1.2; // 20% surcharge

	// output
	printf("Electricity bill = Rs.%f", bill);

	// exit with code 0
	return 0;
}
