#include <stdio.h>

// check whether a number is adam or not using a function

// function prototypes
int check_adam(int);
long rev_num(long);

// main func - entry point
int main() {
	// declarations
	int num;

	// input
	printf("Number: ");
	scanf_s("%d", &num);

	// check and output
	if (check_adam(num) == 0) {
		printf("Number is NOT Adam");
	} else {
		printf("Number is Adam");
	}

	// exit with code 0
	return 0;
}

// function definitions
int check_adam(int num) {
	long rev = rev_num(num), sq, rev_sq;

	sq = num * num;
	rev_sq = rev_num(rev * rev);

	return sq == rev_sq ? 1 : 0;
}

long rev_num(long num) {
	long rev = 0;

	while (num > 0) {
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	return rev;
}
