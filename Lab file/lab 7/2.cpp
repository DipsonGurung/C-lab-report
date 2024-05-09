#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("test.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display content from the file
    fscanf(fp, "%[^\n]", text);
    printf("Content of the file: %s\n", text);

    fclose(fp); // Close the file

    return 0;
}

