#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit from number
    }

    printf("Sum of the digits: %d\n", sum);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

