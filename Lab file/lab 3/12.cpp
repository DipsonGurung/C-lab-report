#include <stdio.h>

void sortDescending(int marks[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}

int main() {
    int marks[10];

    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &marks[i]);
    }

    sortDescending(marks, 10);
    printf("Top five marks:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", marks[i]);
    }
	printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

