#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], text[100];

    printf("Enter the name of the file to append: ");
    scanf("%s", filename);

    fp = fopen(filename, "a"); // Open file in append mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text); // Input text from user
    fprintf(fp, "%s\n", text); // Append text to file

    fclose(fp); // Close the file

    printf("Text appended to file successfully.\n");

    return 0;
}

