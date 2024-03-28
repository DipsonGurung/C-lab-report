#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    double result = pow(base, exponent);
    printf("Result: %.2lf\n", result);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

