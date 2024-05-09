#include <stdio.h>

#define ROWS 2
#define COLS 2

// Function to add two matrices
void addMatrices(int (*a)[COLS], int (*b)[COLS], int (*result)[COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int (*matrix)[COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];

    // Call addMatrices function to add matrices
    addMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("Matrix 2:\n");
    displayMatrix(matrix2);

    printf("Sum of matrices:\n");
    displayMatrix(result);

    return 0;
}

