#include <stdio.h>

// Function prototype
int sumOfSeries(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of the series 1+2+3+...+%d is %d\n", num, sumOfSeries(num));

    return 0;
}

int sumOfSeries(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumOfSeries(n - 1);
}

