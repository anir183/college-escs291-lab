#include <math.h>
#include <stdio.h>

// convert binary to decimal and vice-versa

int main() {
	// declarations
	int num, choice, conversion = 0, i;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\nConversion Menu:\n1 - Convert to Binary\n2 - Convert to "
	       "Decimal\nEnter choice: ");
	scanf("%d", &choice);

	// calculations
	switch (choice) {
		case 1:
			for (i = num; i > 0; i /= 2) {
				conversion = conversion * 10 + i % 2;
			}
			break;
		case 2:
			for (i = 0; num > 0; i++, num /= 10) {
				conversion += pow(2, i) * (num % 10);
			}
			break;
		default:
			printf("Invalid Choice");
	}

	// output
	printf("\nConverted Result: %d", conversion);

	// exit with code 0
	return 0;
}
