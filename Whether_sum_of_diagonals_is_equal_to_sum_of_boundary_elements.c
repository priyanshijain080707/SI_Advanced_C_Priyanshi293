// Whether_sum_of_diagonals_is_equal_to_sum_of_boundary_elements

#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j;
    int diagSum = 0, boundarySum = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        diagSum = diagSum + a[i][i];
        diagSum = diagSum + a[i][2 - i];
    }
    diagSum = diagSum - a[1][1];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == 0 || i == 2 || j == 0 || j == 2)
            {
                boundarySum = boundarySum + a[i][j];
            }
        }
    }
    printf("\nDiagonal Sum = %d\n", diagSum);
    printf("Boundary Sum = %d\n", boundarySum);
    if(diagSum == boundarySum)
    {
        printf("Both sums are equal.\n");
    }
    else
    {
        printf("Both sums are not equal.\n");
    }
    return 0;
}

/* OUTPUT
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9

Diagonal Sum = 25
Boundary Sum = 40
Both sums are not equal.    */