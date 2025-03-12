#include <stdio.h>

// Write a program to calculate gross salary of an employee using basic salary from user

int main() {
	// declarations
	int basic;
	static float hra, da, gross;

	// input
	printf("Enter the basic salary: Rs.");
	scanf("%d", &basic);

	// calculations
	if (basic < 0) {
		printf("\nInvalid basic salary");
		basic = 0;
	}
	else if (basic <= 10000) {
		hra = basic * 0.1;
		da = basic * 0.15;
	}
	else if (basic <= 20000) {
		hra = basic * 0.15;
		da = basic * 0.2;
	}
	else if (basic > 20000) {
		hra = basic * 0.2;
		da = basic * 0.3;
	}
	gross = basic + hra + da;

	// output
	printf("The gross salary is %f", gross);

	// exit with code 0
	return 0;
}
