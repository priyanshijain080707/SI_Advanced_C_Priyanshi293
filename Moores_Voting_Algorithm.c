// Moores_Voting_Algorithm

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int value = arr[0];
    int count = 1;
    for(i = 1; i < n; i++)
    {
        if(arr[i] == value)
            count++;
        else
            count--;
        if(count == 0)
        {
            value = arr[i];
            count = 1;
        }
    }
    count = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == value)
            count++;
    }
    if(count > n / 2)
        printf("Majority Element = %d", value);
    else
        printf("No Majority Element Exists");
    return 0;
}

/* output
Enter size of array: 10
Enter array elements:
1 2 1 3 1 4 1 5 1 1
Majority Element = 1
Enter size of array: 8
Enter array elements:
1 1 1 1 2 3 4 5
No Majority Element Exists  */