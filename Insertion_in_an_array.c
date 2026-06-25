// Insertion_in_an_array
#include <stdio.h>

int main()
{
    int arr[100], n, pos, value, temp;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements of the array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position for insertion: ");
    scanf("%d", &pos);
    printf("Enter value to be inserted: ");
    scanf("%d", &value);
    for(int i = pos - 1; i <= n; i++)
    {
        temp = arr[i];
        arr[i] = value;
        value = temp;
    }
    n++;
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

/* output
Enter size of the array: 5
Enter elements of the array:
1 2 3 5 6
Enter position for insertion: 4
Enter value to be inserted: 4
Array after insertion:
1 2 3 4 5 6  */