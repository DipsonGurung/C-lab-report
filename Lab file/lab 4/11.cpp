#include <stdio.h>

// Function prototype
int sumOfFirstN(int n);

int main() {
    printf("Sum of the first twenty natural numbers is %d\n", sumOfFirstN(20));

    return 0;
}

int sumOfFirstN(int n) {
    return (n * (n + 1)) / 2;
}

