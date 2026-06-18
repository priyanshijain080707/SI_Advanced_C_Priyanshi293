Leaders_in_an_Array
#include <stdio.h>

int main()
{
    int arr[] = {16, 17, 8, 5, 13, 2, 12, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[n - 1];

    printf("Leaders are:\n");
    printf("%d ", max);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            printf("%d ", max);
        }
    }

    return 0;
}
/* OUTPUT
Leaders are:
9 12 13 17    */
