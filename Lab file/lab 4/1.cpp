#include <stdio.h>

// Function prototypes
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(float a, float b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", sub(num1, num2));
    printf("Multiplication: %d\n", mul(num1, num2));
    printf("Division: %.2f\n", divi(num1, num2));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

