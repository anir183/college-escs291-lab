#include <stdio.h>

// find the maximum and minimum of two numbers using a function

// function prototypes
int find_max(int, int);
int find_min(int, int);

// main func - entry point
int main() {
	// declarations
	int num1, num2;

	// input
	printf("1st Number: ");
	scanf_s("%d", &num1);
	printf("2nd Number: ");
	scanf_s("%d", &num2);

	// output
	printf("\nMax = %d", find_max(num1, num2));
	printf("\nMin = %d", find_min(num1, num2));

	// exit with code zero
	return 0;
}

// function definitions
int find_max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}
int find_min(int num1, int num2) {
	return num1 < num2 ? num1 : num2;
}
