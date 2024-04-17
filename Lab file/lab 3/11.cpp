#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Prime numbers between 1 to 100:\n");
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

