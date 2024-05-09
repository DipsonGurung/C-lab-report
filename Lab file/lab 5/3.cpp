#include <stdio.h>

// Define structure
struct Student {
    char name[20];
    int rollno;
    int mark;
};

int main() {
    // Declare array of structures
    struct Student students[5];

    // Read data for 5 students
    printf("Enter name, roll number, and mark for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].rollno);
        printf("Mark: ");
        scanf("%d", &students[i].mark);
    }

    // Display names and roll numbers of students with marks greater than 50
    printf("\nStudents with marks greater than 50:\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].mark > 50) {
            printf("Name: %s, Roll number: %d\n", students[i].name, students[i].rollno);
        }
    }

    return 0;
}

