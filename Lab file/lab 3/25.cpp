#include <stdio.h>
#include <string.h>

void sortNamesAlphabetically(char names[][50], int size) {
    char temp[50];
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[10][50];

    printf("Enter names of 10 students:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%s", names[i]);
    }

    sortNamesAlphabetically(names, 10);

    printf("Sorted names:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%s\n", names[i]);
    }
	printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

