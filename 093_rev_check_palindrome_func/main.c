#include <stdio.h>

// reverse a 5 digit number and check whether it is palindrome or not using a
// function

// function prototypes
long rev_num(int);
int check_palindrome(int);

int main() {
	int num;

	printf("Number: ");
	scanf_s("%d", &num);

	if (check_palindrome(num) == 0) {
		printf("The number is NOT Palindrome");
	} else {
		printf("The number is Palindrome");
	}

	return 0;
}

// function definitions
int check_palindrome(int num) {
	if (rev_num(num) == (long)num) {
		return 1;
	}

	return 0;
}

long rev_num(int num) {
	long rev = 0;

	while (num > 0) {
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	return rev;
}
