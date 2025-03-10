#include <stdio.h>
#include <math.h>

// Write a program to find the roots of a quadratic equatoin with parameters from user

int main() {
	// declarations
	int a, b, c;
	double D, root1, root2;
	
	// input
	printf("Calculate roots of quadratic eqn (ax^2 + bx + c = 0):");
	printf("\na = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	
	// calculations and output
	D = pow(b * b - 4 * a * c, 0.5);
	if (D >= 0) {
		root1 = (-b + D) / 2 * a;
		root2 = (-b - D) / 2 * a;
		printf("\nThe roots are %lf and %lf", root1, root2);
	}
	else {
		printf("\nImaginary roots");
	}
	
	// exit with code 0
	return 0;
}
