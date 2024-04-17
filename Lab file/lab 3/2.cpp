#include <stdio.h>

void printArrayWithAddresses(int numbers[], int size) {
    printf("Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Number %d: %d\tAddress: %p\n", i + 1, numbers[i], &numbers[i]);
    }
}

int main() {
    int numbers[10];
    printf("Enter 10 different numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &numbers[i]);
    }
    printArrayWithAddresses(numbers, 10);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

