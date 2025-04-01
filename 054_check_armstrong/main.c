#include <math.h>
#include <stdio.h>

// check if a number is armstrong or not

int main() {
	// declarations
	int num, temp, numOfDig, i;
	double sumOfPower;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);

	// calculations
	temp = num;
	for (numOfDig = 0; temp > 0; numOfDig++, temp /= 10)
		;
	for (i = num; i > 0; i /= 10) {
		sumOfPower += pow(i % 10, numOfDig);
	}

	// check and output
	if (num == sumOfPower) {
		printf("The number is Armstrong");
	} else {
		printf("The number is NOT Armstrong");
	}

	// exit with code 0
	return 0;
}
