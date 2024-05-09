#include <stdio.h>

// Function prototype
int power(int a, int b);

int main() {
    int base, exponent;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d raised to the power %d is %d\n", base, exponent, power(base, exponent));

    return 0;
}

int power(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}

