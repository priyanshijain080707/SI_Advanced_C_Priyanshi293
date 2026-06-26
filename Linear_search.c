// linear_search
#include <stdio.h>

int main()
{
    int n, key, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}

/* output
Enter size of array: 5
Enter sorted array elements:
1 2 3 4 5
Enter element to search: 3
Element found at index 2

Enter size of array: 4
Enter sorted array elements:
1 2 3 4
Enter element to search: 5
Element not found */
