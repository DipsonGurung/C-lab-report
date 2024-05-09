#include <stdio.h>

// Define union
union Student {
    int roll;
    float marks;
};

int main() {
    // Declare union variable
    union Student s;

    // Assign values to union members
    s.roll = 10;
    printf("Roll: %d\n", s.roll);

    s.marks = 85.5;
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

