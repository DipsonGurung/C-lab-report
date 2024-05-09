#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100] = "D:\\test\\student.txt";

    fp = fopen(filename, "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write student information to file
    fprintf(fp, "Name: John\n");
    fprintf(fp, "Roll: 123\n");
    fprintf(fp, "Address: 123 Main St\n");
    fprintf(fp, "Marks: 85\n");

    fclose(fp); // Close the file

    printf("Student information written to file successfully.\n");

    return 0;
}

