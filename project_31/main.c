#include <stdio.h>

// Write a program to take perform mathematical operation using operator and number from user

int main() {
	// declarations
	int num1, num2;
	float result;
	char operator;

	// input
	printf("Calculate a ? b:");
	printf("\na = ");
	scanf("%d", &num1);
	printf("? = ");
	scanf(" %c", &operator);
	printf("b = ");
	scanf("%d", &num2);

	// calculations
	switch (operator) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			result = (float) num1 / num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			printf("\nInvalid operator");
			operator = 'X';
			result = 0;
	}

	// output
	printf("\nResult (a %c b) = %f", operator, result);

	// exit with code 0
	return 0;
}
