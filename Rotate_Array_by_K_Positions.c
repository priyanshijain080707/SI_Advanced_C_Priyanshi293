Rotate_Array_by_K_Positions
#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5, i, j;
    int k = 1;
    int temp;
    for(i = 0; i < k; i++)
    {
        temp = arr[n-1];
        for(j = n-1; j > 0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/* OUTPUT
Array after rotation:
5 1 2 3 4    */
