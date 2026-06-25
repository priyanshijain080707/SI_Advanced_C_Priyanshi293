// Transpose_of_a_matrix

#include <stdio.h>

int main() {
    int mat[50][50];
    int M, N, i, j;
    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);
    printf("\nEnter elements of matrix (%dx%d):\n", M, N);
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix is \n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is \n");
    for (i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d \t",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}

/* output
Enter number of rows (M): 3
Enter number of columns (N): 3

Enter elements of matrix (3x3):
1 2 3
4 5 6
7 8 9
The matrix is 
1	2	3	
4	5	6	
7	8	9	
The transpose of the matrix is 
1 	4 	7 	
2 	5 	8 	
3 	6 	9 	
