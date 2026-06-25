// Dutch_national_flag_algorithm 

#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements (0,1,2 only):\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int low = 0;
    int mid = 0;
    int high = n - 1;
    int temp;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }

    printf("Sorted Array:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/* output
Enter size of array: 8
Enter elements (0,1,2 only):
1 0 0 2 0 1 2 0
Sorted Array:
0 0 0 0 1 1 2 2 */