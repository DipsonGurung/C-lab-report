#include <stdio.h>

int main() {
    int i = 10, sum = 0;

    printf("Numbers 10 to 1: ");
    while (i >= 1) {
        printf("%d ", i);
        sum += i;
        i--;
    }
    printf("\nSum: %d\n", sum);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

