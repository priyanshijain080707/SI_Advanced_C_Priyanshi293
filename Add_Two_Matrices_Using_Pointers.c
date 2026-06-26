// Add_Two_Matrices_Using_Pointers

#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r,col;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&col);
    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    printf("Enter second matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&b[i][j]);
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
    printf("Sum Matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}

/* OUTPUT
Enter rows and columns: 3 3
Enter first matrix:
1 2 3
4 5 6
7 8 9
Enter second matrix:
9 8 7
6 5 4
3 2 1
Sum Matrix:
10 10 10 
10 10 10 
10 10 10     */