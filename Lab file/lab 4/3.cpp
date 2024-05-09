#include <stdio.h>

// Function prototype
float product(float a, int b);

int main() {
    float floatNum;
    int intNum;
    printf("Enter a float number and an integer: ");
    scanf("%f %d", &floatNum, &intNum);

    printf("Product: %.2f\n", product(floatNum, intNum));

    return 0;
}

float product(float a, int b) {
    return a * b;
}

