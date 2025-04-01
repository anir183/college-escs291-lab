#include <stdio.h>

// check if number is even or odd

int main() {
	// declarations
	int num;

	// input
	printf("Enter a number: ");
	scanf("%d", &num);

	// check output
	if (num % 2 == 0) {
		printf("The number is EVEN");
	} else {
		printf("The number is ODD");
	}

	// exit with code 0
	return 0;
}
