#include <stdio.h>

int main() {
    int numbers[25];
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter twenty-five numbers:\n");
    for (int i = 0; i < 25; ++i) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }
        if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 

    return 0;
}

