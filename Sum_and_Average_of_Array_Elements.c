// Sum_and_Average_of_Array_Elements

#include <stdio.h>
int main()
{
    int n, arr[100], sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",(float)sum/n);
    return 0;
}

/* OUTPUT
Enter size of array: 7
Enter array elements: 2 4 56 78 34 8 77
Sum = 259
Average = 37.00   */