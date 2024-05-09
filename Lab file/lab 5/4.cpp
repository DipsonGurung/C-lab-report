#include <stdio.h>
#include <string.h>

// Define structure
struct Employee {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    // Declare array of structures
    struct Employee employees[5];

    // Read employee information
    printf("Enter name, address, and salary for 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort employee information in ascending order of name
    struct Employee temp;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    // Display employee information
    printf("\nEmployee information in ascending order of name:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Address: %s, Salary: %.2f\n", employees[i].name, employees[i].address, employees[i].salary);
    }

    return 0;
}

