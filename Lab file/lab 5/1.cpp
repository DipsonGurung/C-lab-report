#include <stdio.h>

// Define structure
struct Student {
    char name[20];
    int totalMarks;
    char grade;
};

int main() {
    // Declare and initialize structure variables
    struct Student students[] = {
        {"Ram", 100, 'C'},
        {"Sita", 120, 'B'},
        {"Gita", 130, 'B'},
        {"Gopal", 150, 'A'}
    };

    // Display data in proper manner
    printf("Name\tTotal Marks\tGrade\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\t%d\t\t%c\n", students[i].name, students[i].totalMarks, students[i].grade);
    }

    return 0;
}

