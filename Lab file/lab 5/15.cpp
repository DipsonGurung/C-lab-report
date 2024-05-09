#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for Employee
struct Employee {
    char name[50];
    float salary;
    struct Date hireDate;
};

int main() {
    // Declare and initialize Employee structure variable
    struct Employee Person1 = {"Hari", 50000, {10, 3, 2001}};

    // Display initialized employee information
    printf("Employee Information:\n");
    printf("Name: %s\n", Person1.name);
    printf("Salary: $%.2f\n", Person1.salary);
    printf("Hired on: %02d-%02d-%d\n", Person1.hireDate.day, Person1.hireDate.month, Person1.hireDate.year);

    return 0;
}

