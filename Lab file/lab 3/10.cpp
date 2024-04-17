#include <stdio.h>

void addMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[2][3], mat2[2][3], result[2][3];

    printf("Enter elements of first 2x3 matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second 2x3 matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices(mat1, mat2, result, 2, 3);
    printf("Sum of matrices:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    subtractMatrices(mat1, mat2, result, 2, 3);
    printf("Difference of matrices:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    multiplyMatrices(mat1, mat2, result, 2, 3, 3);
    printf("Product of matrices:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

