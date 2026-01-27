#include <stdio.h>

#define MAX 10

// Functions
void inputMatrix(int mat[MAX][MAX], int rows, int cols);
void displayMatrix(int mat[MAX][MAX], int rows, int cols);
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2);
void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int rows, int cols);

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int rows1, cols1, rows2, cols2, choice;
    
    printf("Matrix Operations\n\n");
    printf("---- First Matrix ----\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows1);
    printf("Enter number of columns: ");
    scanf("%d", &cols1);
    inputMatrix(mat1, rows1, cols1);
    printf("\n--- Second Matrix ---\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows2);
    printf("Enter number of columns: ");
    scanf("%d", &cols2);
    inputMatrix(mat2, rows2, cols2);
    
    do {
        printf("\n==== MATRIX OPERATIONS MENU ====\n");
        printf("1. Display Matrices\n");
        printf("2. Matrix Addition\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Matrix Transpose\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:  //display
                printf("\nFirst Matrix (%dx%d):\n", rows1, cols1);
                displayMatrix(mat1, rows1, cols1);
                printf("\nSecond Matrix (%dx%d):\n", rows2, cols2);
                displayMatrix(mat2, rows2, cols2);
                break;
                
            case 2:  //addition
                if(rows1 == rows2 && cols1 == cols2) {
                    addMatrices(mat1, mat2, result, rows1, cols1);
                    printf("\nResult of Matrix Addition (%dx%d):\n", rows1, cols1);
                    displayMatrix(result, rows1, cols1);
                } else {
                    printf("\nError: Matrices must have same dimensions for addition!\n");
                    printf("Matrix 1: %dx%d, Matrix 2: %dx%d\n", rows1, cols1, rows2, cols2);
                }
                break;
                
            case 3:  //multipliply
                if(cols1 == rows2) {
                    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
                    printf("\nResult of Matrix Multiplication (%dx%d):\n", rows1, cols2);
                    displayMatrix(result, rows1, cols2);
                } else {
                    printf("\nError: Columns of first matrix must equal rows of second matrix!\n");
                    printf("Matrix 1 columns: %d, Matrix 2 rows: %d\n", cols1, rows2);
                }
                break;
                
            case 4:  //transpose
                printf("\nTranspose Operations:\n");
                printf("1. Transpose First Matrix\n");
                printf("2. Transpose Second Matrix\n");
                printf("Enter choice: ");
                int transposeChoice;
                scanf("%d", &transposeChoice);
                
                if(transposeChoice == 1) {
                    printf("\nTranspose of First Matrix (%dx%d):\n", cols1, rows1);
                    transposeMatrix(mat1, result, rows1, cols1);
                    displayMatrix(result, cols1, rows1);
                } else if(transposeChoice == 2) {
                    printf("\nTranspose of Second Matrix (%dx%d):\n", cols2, rows2);
                    transposeMatrix(mat2, result, rows2, cols2);
                    displayMatrix(result, cols2, rows2);
                } else {
                    printf("Invalid transpose choice!\n");
                }
                break;
                
            case 5:
                printf("\nThank you for using Matrix Operations!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please enter 1-5.\n");
        }
    } while(choice != 5);
    
    return 0;
}

//input matrix
void inputMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("Enter matrix elements row by row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d: ", i+1);
        for(int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

//display
void displayMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("[\n");
    for(int i = 0; i < rows; i++) {
        printf("  ");
        for(int j = 0; j < cols; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
}

//addition
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

//multiply
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2) {
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

//transpose
void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}