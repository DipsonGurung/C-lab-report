#include <stdio.h>

int main() {
    int first, second, add, subtract, multiply;
    float divide; // We use float for division result

    printf("Enter two integers:\n");
    scanf("%d%d", &first, &second);

    // Perform arithmetic operations
    add = first + second;
    subtract = first - second;
    multiply = first * second;
    divide = first / (float)second; // Typecasting to float

    // Display results
    printf("Sum = %d\n", add);
    printf("Difference = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %.2f\n", divide); // Display division result with 2 decimal places

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

