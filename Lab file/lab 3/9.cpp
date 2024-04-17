#include <stdio.h>

int main() {
    int matrix[2][3];

    printf("Enter elements of a 2x3 matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
	printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

