#include <stdio.h>

void findMinMax(int numbers[], int size) {
    int min = numbers[0], max = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Minimum: %d\nMaximum: %d\n", min, max);
}

int main() {
    int numbers[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &numbers[i]);
    }
    findMinMax(numbers, 10);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

