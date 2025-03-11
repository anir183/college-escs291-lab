#include <stdio.h>
#include <math.h>

// Write a program to print the sum of series 1 + 2^2/2 + 3^3/3 + .. + n^n/n

int main() {
    // declarations
    int n, i;
    double sum = 0;

    // input
    printf("n: ");
    scanf("%d", &n);

    // calculation
    for (i = 1; i <= n; i++) {
        sum += pow(n, n - 1);
    }

    // output
    printf("\nSum = %f", sum);

    // exit with code 0
    return 0;
}
