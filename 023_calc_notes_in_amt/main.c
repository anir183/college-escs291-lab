#include <stdio.h>

// calculate total number of different notes in a given amount

int main() {
	// declarations
	int amount, fh, th, oh, fy, ty, tn, ch;

	// input
	printf("Enter an amount: Rs.");
	scanf_s("%d", &amount);

	// calculations
	fh = amount / 500;
	amount %= 500;
	th = amount / 200;
	amount %= 200;
	oh = amount / 100;
	amount %= 100;
	fy = amount / 50;
	amount %= 50;
	ty = amount / 20;
	amount %= 20;
	tn = amount / 10;
	amount %= 10;
	ch = amount;

	// output
	printf("\nFive hundreds = %d", fh);
	printf("\nTwo hundreds = %d", th);
	printf("\nOne hundreds = %d", oh);
	printf("\nFifties = %d", fy);
	printf("\nTwenties = %d", ty);
	printf("\nTens = %d", tn);
	printf("\nChange = %d", ch);

	// exit with code 0
	return 0;
}
