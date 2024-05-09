#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];

    // Writing string to data file
    fp = fopen("new1.dat", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a string: ");
    gets(str); // Input string from user

    // Write string to data file
    fputs(str, fp);

    fclose(fp); // Close the file

    printf("String written to file successfully.\n");

    // Reading string from data file and displaying it
    fp = fopen("new1.dat", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Content of the data file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str); // Display string
    }

    fclose(fp); // Close the file

    return 0;
}

