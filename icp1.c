// 5
#include <stdio.h>

#define N 3
#define M 3

void inputMatrix(int matrix[N][M], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

void printMatrix(int matrix[N][M], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

void addMatrices(int A[N][M], int B[N][M], int rows, int cols) {
    int result[N][M];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
    printMatrix(result, rows, cols);
}

void multiplyMatrices(int A[N][M], int B[N][M], int rows, int cols) {
    int result[N][M] = {0};
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            for (int k = 0; k < cols; k++)
                result[i][j] += A[i][k] * B[k][j];
    printMatrix(result, rows, cols);
}

void transposeMatrix(int matrix[N][M], int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }
}

void searchElement(int matrix[N][M], int rows, int cols, int x) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] == x) {
                printf("Element %d found at (%d, %d)\n", x, i, j);
                return;
            }
    printf("Element %d not found\n", x);
}

void sumOfElements(int matrix[N][M], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum += matrix[i][j];
    printf("Sum of elements: %d\n", sum);
}

int main() {
    int A[N][M], B[N][M], choice, x;

    printf("Enter elements of matrix A:\n");
    inputMatrix(A, N, M);
    printf("Enter elements of matrix B:\n");
    inputMatrix(B, N, M);

    do {
        printf("\nMenu:\n1) Addition\n2) Multiplication\n3) Transpose\n4) Search Element\n5) Sum of Elements\n0) Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(A, B, N, M);
                break;
            case 2:
                multiplyMatrices(A, B, N, M);
                break;
            case 3:
                printf("Transpose of which matrix (1 for A, 2 for B)?: ");
                scanf("%d", &x);
                transposeMatrix(x == 1 ? A : B, N, M);
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &x);
                searchElement(A, N, M, x);
                break;
            case 5:
                printf("Sum of which matrix (1 for A, 2 for B)?: ");
                scanf("%d", &x);
                sumOfElements(x == 1 ? A : B, N, M);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
/* OUTPUT
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> gcc icp1.c
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe   
Enter elements of matrix A:
1
2
3
4
5
6
7
8
9
Enter elements of matrix B:
1
2
3
4
5
6
7
8
9

Menu:
1) Addition
2) Multiplication
3) Transpose
4) Search Element
5) Sum of Elements
0) Exit
Choice: 1
2 4 6 
8 10 12
14 16 18

Menu:
1) Addition
2) Multiplication
3) Transpose
4) Search Element
5) Sum of Elements
0) Exit
Choice: 2
30 36 42 
66 81 96
102 126 150

Menu:
1) Addition
2) Multiplication
3) Transpose
4) Search Element
5) Sum of Elements
0) Exit
Choice: 3
Transpose of which matrix (1 for A, 2 for B)?: 1
1 4 7 
2 5 8
3 6 9

Menu:
1) Addition
2) Multiplication
3) Transpose
4) Search Element
5) Sum of Elements
0) Exit
Choice: 4
Enter element to search: 3
Element 3 found at (0, 2)

Menu:
1) Addition
2) Multiplication
3) Transpose
4) Search Element
5) Sum of Elements
0) Exit
Choice: 5
Sum of which matrix (1 for A, 2 for B)?: 1
Sum of elements: 45

Menu:
1) Addition
2) Multiplication
3) Transpose
4) Search Element
5) Sum of Elements
0) Exit
Choice: 0
Exiting...*/