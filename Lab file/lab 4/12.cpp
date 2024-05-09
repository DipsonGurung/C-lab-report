#include <stdio.h>

int recursiveFibonacci(int n);

int main() {
    int terms;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", recursiveFibonacci(i));
    }
    printf("\n");

    return 0;
}

int recursiveFibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

