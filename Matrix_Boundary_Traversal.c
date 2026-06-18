// Matrix_Boundary_Traversal
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter the matrix\n");
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Boundary elements:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
/*OUTPUT
Enter number of rows and columns: 3 3
Enter the matrix
1 2 3
4 5 6
7 8 9
Boundary elements:
1 2 3 4 6 7 8 9    */