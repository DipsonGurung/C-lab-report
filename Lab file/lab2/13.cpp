#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        product *= n % 10;
        n /= 10;
    }

    printf("Product of digits: %d\n", product);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

