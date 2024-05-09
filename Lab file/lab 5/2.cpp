#include <stdio.h>

// Define structure
struct Student {
    char name[20];
    int roll;
    float marks;
    char remarks[50];
};

int main() {
    // Declare structure variable
    struct Student s;

    // Read data
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Enter remarks: ");
    scanf(" %[^\n]", s.remarks);

    // Display data
    printf("\nName: %s\nRoll: %d\nMarks: %.2f\nRemarks: %s\n", s.name, s.roll, s.marks, s.remarks);

    return 0;
}

