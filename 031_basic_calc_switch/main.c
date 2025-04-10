#include <stdio.h>

// convert symbol to mathematical operation (basic calculator) using switch

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
	switch (operator) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			result = (float)num1 / num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			printf("\nInvalid operator");
			operator= 'X';
			result = 0;
	}

	// output
	printf("\nResult (a %c b) = %f", operator, result);

	// exit with code 0
	return 0;
}
