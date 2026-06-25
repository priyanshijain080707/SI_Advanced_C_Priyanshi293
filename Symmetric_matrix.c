// Symmetric_matrix

#include <stdio.h>

int main() 
{
    int mat[50][50], trns[50][50];
    int M, N, i, j, c=0;
    printf("Enter number of rows and columns (M): ");
    scanf("%d", &M);
    printf("\nEnter elements of a square matrix (%dx%d):\n", M, M);
    for(i = 0; i < M; i++) 
    {
        for(j = 0; j < M; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix is \n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is \n");
    for (i=0; i<M; i++)
    {
        for(j=0; j<M; j++)
        {
            trns[i][j]=mat[j][i];
            printf("%d \t",trns[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<M; i++)
    {
        for(j=0; j<M; j++)
        {
            if (mat[i][j]!=trns[i][j])
            c=1;
        }
    }
    if (c==0)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
       
    return 0;
}

/* output
Enter number of rows and columns (M): 3

Enter elements of a square matrix (3x3):
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
The matrix is not symmetric 

Enter number of rows and columns (M): 3

Enter elements of a square matrix (3x3):
1 2 3
2 4 5
3 5 6
The matrix is 
1	2	3	
2	4	5	
3	5	6	
The transpose of the matrix is 
1 	2 	3 	
2 	4 	5 	
3 	5 	6 	
The matrix is symmetric  */