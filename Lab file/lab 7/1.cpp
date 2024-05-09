#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("test.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fp, "Welcome to my college"); // Write text to file
    fclose(fp); // Close the file
    printf("Text written to file successfully.\n");
    return 0;
}

