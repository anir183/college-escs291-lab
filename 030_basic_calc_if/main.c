#include <stdio.h>

// convert symbol to mathematical operation (basic calculator) using ifelse

int main() {
	// declarations
	int num1, num2;
	float result;
	char operator;

	// input
	printf("Calculate a ? b:");
	printf("\na = ");
	scanf_s("%d", &num1);
	printf("? = ");
	scanf_s(" %c", &operator);
	printf("b = ");
	scanf_s("%d", &num2);

	// calculations
	if (operator== '+') {
		result = num1 + num2;
	} else if (operator== '-') {
		result = num1 - num2;
	} else if (operator== '*') {
		result = num1 * num2;
	} else if (operator== '/') {
		result = (float)num1 / num2;
	} else if (operator== '%') {
		result = num1 % num2;
	} else {
		printf("\nInvalid operator");
		operator= 'X';
		result = 0;
	}

	// output
	printf("\nResult (a %c b) = %f", operator, result);

	// exit with code 0
	return 0;
}
