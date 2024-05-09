#include <stdio.h>

// Function prototype
int fibonacci(int n);

int main() {
    int terms;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

