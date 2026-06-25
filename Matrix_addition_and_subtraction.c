// Matrix_addition_and_subtraction

#include <stdio.h>

int main() {
    int mat1[50][50], mat2[50][50], addition[50][50], subtraction[50][50];
    int M, N, i, j;
    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);
    printf("\nEnter elements of first matrix (%dx%d):\n", M, N);
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements of second matrix (%dx%d):\n", M, N);
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
        for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            addition[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            subtraction[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\n Matrix Addition \n");
    printf("Result (%dx%d):\n", M, N);
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", addition[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix Subtraction \n");
    printf("Result (%dx%d):\n", M, N);
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", subtraction[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* output
Enter number of rows (M): 3
Enter number of columns (N): 3

Enter elements of first matrix (3x3):
1 2 3 
4 5 6 
7 8 9

Enter elements of second matrix (3x3):
8 9 7 
4 6 6
3 2 1

 Matrix Addition 
Result (3x3):
9 11 10 
8 11 12 
10 10 10 

 Matrix Subtraction 
Result (3x3):
-7 -7 -4 
0 -1 0 
4 6 8  */