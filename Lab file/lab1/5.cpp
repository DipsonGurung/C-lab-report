#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Compute quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display results
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

