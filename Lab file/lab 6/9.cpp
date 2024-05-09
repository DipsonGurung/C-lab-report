#include <stdio.h>
#include <stdlib.h>

// Function to read matrix from user
void readMatrix(int **matrix, int m, int n) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int **matrix, int m, int n) {
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to find transpose of matrix
void transpose(int **matrix, int **result, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int m, n;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    // Allocate memory for the matrix and its transpose
    int **matrix = (int **)malloc(m * sizeof(int *));
    int **transposeMatrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        transposeMatrix[i] = (int *)malloc(m * sizeof(int));
    }

    // Read matrix from user
    readMatrix(matrix, m, n);

    // Display original matrix
    displayMatrix(matrix, m, n);

    // Find and display transpose of matrix
    transpose(matrix, transposeMatrix, m, n);
    printf("Transpose of matrix:\n");
    displayMatrix(transposeMatrix, n, m);

    // Free dynamically allocated memory
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    for (int i = 0; i < n; i++) {
        free(transposeMatrix[i]);
    }
    free(matrix);
    free(transposeMatrix);

    return 0;
}

