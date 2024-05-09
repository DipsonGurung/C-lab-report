#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to the beginning of the array
    int *ptr = arr;

    // Calculate sum using pointer
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i); // Dereference pointer and add value to sum
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}

