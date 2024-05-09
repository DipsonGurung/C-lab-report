#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], address[100], telephone[20];

    // Writing name, address, and telephone to file
    fp = fopen("contact.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter name: ");
    gets(name); // Input name from user
    printf("Enter address: ");
    gets(address); // Input address from user
    printf("Enter telephone: ");
    gets(telephone); // Input telephone number from user

    // Write name, address, and telephone to file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Address: %s\n", address);
    fprintf(fp, "Telephone: %s\n", telephone);

    fclose(fp); // Close the file

    printf("Contact information written to file successfully.\n");

    // Reading and displaying name, address, and telephone from file
    fp = fopen("contact.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nContact information read from file:\n");
    char line[100];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line); // Display each line read from file
    }

    fclose(fp); // Close the file

    return 0;
}

