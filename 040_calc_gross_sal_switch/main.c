#include <stdio.h>

// calcualte gross salary given basic salary using switch

int main() {
	// declarations
	int basic;
	static float hra, da, gross;

	// input
	printf("Enter the basic salary: Rs.");
	scanf("%d", &basic);

	// calculations
	switch ((basic - 1) / 10000) {
		// (-1 to 9999) / 10000 = 0
		case 0:
			hra = basic * 0.1;
			da = basic * 0.15;
			break;

		// (10000 to 19999) / 10000 = 1
		case 1:
			hra = basic * 0.15;
			da = basic * 0.2;
			break;

		// 20000+
		default:
			hra = basic * 0.2;
			da = basic * 0.3;
	}
	gross = basic + hra + da;

	// output
	printf("The gross salary is %f", gross);

	// exit with code 0
	return 0;
}
