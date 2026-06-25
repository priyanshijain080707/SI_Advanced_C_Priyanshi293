// Largest_and_Smallest_Element

#include <stdio.h>
int main()
{
    int n, arr[100];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int largest=arr[0], smallest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];

        if(arr[i]<smallest)
            smallest=arr[i];
    }
    printf("Largest = %d\n",largest);
    printf("Smallest = %d",smallest);
    return 0;
}

/* OUTPUT
Enter size of array: 7
Enter array elements: 56 45 67 23 4 58 2
Largest = 67
Smallest = 2    */