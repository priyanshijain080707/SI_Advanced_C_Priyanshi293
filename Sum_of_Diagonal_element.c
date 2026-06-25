// Sum_of_Diagonal_element

#include <stdio.h>
int main()
{
    int n, a[10][10], sum=0;
    printf("Enter order of matrix: ");
    scanf("%d",&n);
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
        sum+=a[i][i];
    printf("Diagonal Sum = %d",sum);
    return 0;
}

/* OUTPUT
Enter order of matrix: 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9
Diagonal Sum = 15   */