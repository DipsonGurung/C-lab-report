#include <stdio.h>

int main() {
    int num, originalNum, remainder, result;

    printf("Armstrong numbers between 1 and 500: ");
    for (num = 1; num <= 500; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

