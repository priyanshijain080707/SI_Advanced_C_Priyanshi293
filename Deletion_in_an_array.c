// Deletion_in_an_array

#include <stdio.h>

int main()
{
    int a[100], b[100], n, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for(int i = 0, j = 0; i < n; i++)
    {
        if(i == pos - 1)
            continue;
        b[j++] = a[i];
    }
    printf("Array after deletion:\n");
    for(int i = 0; i < n - 1; i++)
        printf("%d ", b[i]);
    return 0;
}

/* output
Enter size of array: 5
Enter elements:
1 2 3 3 4
Enter position to delete: 3
Array after deletion:
1 2 3 4  */