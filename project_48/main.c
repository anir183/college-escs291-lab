#include <stdio.h>
#include <math.h>

// Write a program to print the sum of series 1 + (1 + 2) + (1 + 2 + 3) + ...

int main() {
    // declarations
    int n, sum = 1, i;

    // input
    printf("n: ");
    scanf("%d", &n);

    // calculation
    for (i = 1; i <= n; i++)
        sum += i * (n + 1 - i);

    // output
    printf("Sum = %d", sum);

    // exit with code 0
    return 0;
}
