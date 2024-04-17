#include <stdio.h>

void sortAscending(int numbers[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &numbers[i]);
    }
    sortAscending(numbers, 10);
    printf("Sorted numbers: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

