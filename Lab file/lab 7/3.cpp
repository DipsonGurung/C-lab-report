#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Writing string to file
    fp = fopen("string.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter a string: ");
    gets(str); // Input string from user
    fputs(str, fp); // Write string to file
    fclose(fp); // Close the file

    // Reading string from file and displaying it
    fp = fopen("string.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("String read from file: ");
    while (fgets(str, sizeof(str), fp) != NULL) { // Read string from file
        printf("%s", str); // Display string
    }
    fclose(fp); // Close the file

    return 0;
}

