// Equal_matrix_or_not

#include <stdio.h>
int main()
{
    int r,c,a[10][10],b[10][10],temp=1;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    printf("Enter second matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]!=b[i][j])
                temp=0;
    if(temp)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");
    return 0;
}

/* OUTPUT
Enter rows and columns: 3 3
Enter first matrix:
1 2 3
4 5 6
7 8 9
Enter second matrix:
1 2 3
4 5 6
7 8 9
Matrices are Equal

Enter rows and columns: 3 3
Enter first matrix:
1 2 3
4 5 6
7 8 9
Enter second matrix:
9 8 7
6 5 4
3 2 1
Matrices are Not Equal    */