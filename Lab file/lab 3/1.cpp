//1. Program to find sum, product, average, and maximum of 10 numbers:
#include <stdio.h>

void readNumbers(int numbers[], int size) {
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &numbers[i]);
    }
}

void findSumProductAverageMax(int numbers[], int size) {
    int sum = 0, product = 1, max = numbers[0];
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
        product *= numbers[i];
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    float average = (float)sum / size;
    printf("Sum: %d\nProduct: %d\nAverage: %.2f\nMaximum: %d\n", sum, product, average, max);
}

int main() {
    int numbers[10];
    readNumbers(numbers, 10);
    findSumProductAverageMax(numbers, 10);
     printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

