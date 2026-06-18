// Search_in_Sorted_Matrix
#include <stdio.h>

int main()
{
    int rows, cols, target;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the matrix\n");
    int arr[rows][cols];
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the value to be searched: ");
    scanf("%d", &target);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == target)
            {
                printf("Found at row %d, column %d\n", i + 1, j + 1);
                return 0;
            }
        }
    }

    printf("Not found\n");

    return 0;
}
/* OUTPUT
Enter the number of rows and columns: 3 3
Enter the matrix
1 2 3
4 5 6
7 8 9
Enter the value to be searched: 4
Found at row 2, column 1   */
