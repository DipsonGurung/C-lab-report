//If the marks obtained by a student in five different subjects are input through the keyboard, find out 
//the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks 
//obtained by a student in each subject are 100.

#include <stdio.h>

int main() {
    int marks[5];
    int i;
    float total = 0.0, avg;

    printf("Enter marks obtained in 5 subjects: ");
    for(i=0; i<5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    avg = total / 5;

    printf("Aggregate Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", avg);
    printf("Name: Dipson Gurung (BSc.CSIT), Roll no.: 16\n");

    return 0;
}

