#include <stdio.h>

int main() {
    FILE *fp;
    int arr[10];

    // Writing array to file
    fp = fopen("array.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]); // Input numbers from user
        fprintf(fp, "%d ", arr[i]); // Write number to file
    }

    fclose(fp); // Close the file

    printf("Array written to file successfully.\n");

    // Reading array from file and displaying it
    fp = fopen("array.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nArray read from file:\n");
    for (int i = 0; i < 10; i++) {
        fscanf(fp, "%d", &arr[i]); // Read number from file
        printf("%d ", arr[i]); // Display number
    }

    fclose(fp); // Close the file

    return 0;
}

