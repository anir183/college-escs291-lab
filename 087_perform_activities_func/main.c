#include <stdio.h>

// perform the following activites in a given range using a function
// a) count the number of odd numbers
// b) count the number of even numbers
// c) sum of all odd numbers
// d) sum of all even numbers

// function prototypes
int count(char);
int sum(char);

// global declarations
int lower, upper;

// main func - entry point
int main() {
	// input
	printf("Lower limit: ");
	scanf_s("%d", &lower);
	printf("Upper limit: ");
	scanf_s("%d", &upper);

	// output
	printf("\n%d even numbers summed to %d", count('e'), sum('e'));
	printf("\n%d odd numbers summed to %d", count('o'), sum('o'));

	// exit with code 0
	return 0;
}

// function definitions
int count(char flag) {
	int count = 0, i;

	for (i = lower; i <= upper; i++) {
		if (flag == 'e' || flag == 'E') {
			if (i % 2 == 0) {
				count++;
			}
		}

		if (flag == 'o' || flag == 'O') {
			if (i % 2 != 0) {
				count++;
			}
		}
	}

	return count;
}
int sum(char flag) {
	int sum = 0, i;

	for (i = lower; i <= upper; i++) {
		if (flag == 'e' || flag == 'E') {
			if (i % 2 == 0) {
				sum += i;
			}
		}

		if (flag == 'o' || flag == 'O') {
			if (i % 2 != 0) {
				sum += i;
			}
		}
	}

	return sum;
}
