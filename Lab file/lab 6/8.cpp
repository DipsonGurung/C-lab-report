#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate memory for age of employees
    int *ages = (int *)malloc(n * sizeof(int));

    if (ages == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read age of each employee from user
    printf("Enter age of %d employees:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    // Count the number of employees above 80 years old
    for (int i = 0; i < n; i++) {
        if (ages[i] > 80) {
            count++;
        }
    }

    printf("Number of employees above 80 years old: %d\n", count);

    // Free dynamically allocated memory
    free(ages);

    return 0;
}

