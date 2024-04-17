#include <stdio.h>

void copyArrayReverse(int original[], int reversed[], int size) {
    for (int i = 0; i < size; ++i) {
        reversed[i] = original[size - i - 1];
    }
}

int main() {
    int original[10], reversed[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &original[i]);
    }

    copyArrayReverse(original, reversed, 10);
    printf("Original array: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", original[i]);
    }
    printf("\nReversed array: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 

    return 0;
}

