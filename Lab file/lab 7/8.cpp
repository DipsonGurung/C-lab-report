#include <stdio.h>

int main() {
    FILE *fp;
    int start = 10, end = 50;

    // Writing even numbers to file
    fp = fopen("D:\\test\\evennumbers.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Writing even numbers between %d and %d to file...\n", start, end);

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            fprintf(fp, "%d\n", i); // Write even number to file
        }
    }

    fclose(fp); // Close the file

    printf("Even numbers written to file successfully.\n");

    // Reading and displaying even numbers from file
    fp = fopen("D:\\test\\evennumbers.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nEven numbers read from file:\n");
    int num;
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("%d\n", num); // Display each even number read from file
    }

    fclose(fp); // Close the file

    return 0;
}

