#include <stdio.h>

int main() {
    FILE *fp;
    int n = 20;

    // Writing natural numbers to file
    fp = fopen("numbers.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Writing natural numbers 1 to %d to file...\n", n);

    for (int i = 1; i <= n; i++) {
        fprintf(fp, "%d\n", i); // Write natural number to file
    }

    fclose(fp); // Close the file

    printf("Natural numbers written to file successfully.\n");

    // Reading numbers from file and displaying twice of stored numbers
    fp = fopen("numbers.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nTwice of the stored numbers:\n");
    int num;
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("%d\n", num * 2); // Display twice of each number read from file
    }

    fclose(fp); // Close the file

    return 0;
}

