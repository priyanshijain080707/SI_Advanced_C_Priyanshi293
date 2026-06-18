// Row_with_Maximum_1s
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxRow = 0, maxCount = 0;

    for(int i = 0; i < rows; i++)
    {
        int count = 0;

        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == 1)
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }

    if(maxCount > 0)
        printf("Row %d has maximum number of 1s (%d)", maxRow + 1, maxCount);
    else
        printf("No 1s found");

    return 0;
}
/* OUTPUT
Enter rows and columns: 3 3
Enter matrix elements:
1 0 0
1 1 1
0 1 1
Row 2 has maximum number of 1s (3)   */
