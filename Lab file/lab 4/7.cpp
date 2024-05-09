#include <stdio.h>

// Function prototype
long int recursiveFactorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %ld\n", num, recursiveFactorial(num));

    return 0;
}

long int recursiveFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * recursiveFactorial(n - 1);
}

