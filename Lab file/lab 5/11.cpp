#include <stdio.h>

// Define structure template for student access information
struct StudentInfo {
    char username[9]; // 8-character student username
    char id[10];      // 9-character student ID number
    char pin[6];      // 5-digit student PIN number
};

int main() {
    // Declare structure variable for student access information
    struct StudentInfo student;

    // Read student information
    printf("Enter student information:\n");
    printf("Username (8 characters): ");
    scanf("%s", student.username);
    printf("ID number (9 characters): ");
    scanf("%s", student.id);
    printf("PIN number (5 digits): ");
    scanf("%s", student.pin);

    // Display student information
    printf("\nStudent information:\n");
    printf("Username: %s\n", student.username);
    printf("ID number: %s\n", student.id);
    printf("PIN number: %s\n", student.pin);

    return 0;
}

