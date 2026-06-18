// Equilibrium_Index
#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 0, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int leftSum = 0, rightSum = 0;

        for (int j = 0; j < i; j++)
            leftSum += arr[j];

        for (int j = i + 1; j < n; j++)
            rightSum += arr[j];

        if (leftSum == rightSum)
        {
            printf("Equilibrium index = %d\n", i);
            printf("Element = %d\n", arr[i]);
            return 0;
        }
    }
    printf("No equilibrium index found\n");
    return 0;
}
/* OUTPUT
The equilibrium element is found at index 5 and the element is 0   */
