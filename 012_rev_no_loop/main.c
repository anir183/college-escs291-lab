#include <stdio.h>

// reverse 5 digit number without loops

int main() {
	// declarations
	long num;
	static long sum, rev;

	// input
	printf("Enter a 5-digit number: ");
	scanf("%ld", &num);

	// reversing
	rev = rev * 10 + num % 10;
	sum += num % 10;
	num /= 10;

	rev = rev * 10 + num % 10;
	sum += num % 10;
	num /= 10;

	rev = rev * 10 + num % 10;
	sum += num % 10;
	num /= 10;

	rev = rev * 10 + num % 10;
	sum += num % 10;
	num /= 10;

	rev = rev * 10 + num;
	sum += num;

	// output
	printf("\nReverse = %ld", rev);
	printf("\nSum = %ld", sum);

	// exit with code 0
	return 0;
}
