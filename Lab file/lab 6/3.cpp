#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Sorting the marks in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Displaying the top five marks
    printf("Top five marks:\n");
    for (int i = 0; i < 5 && i < n; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}

