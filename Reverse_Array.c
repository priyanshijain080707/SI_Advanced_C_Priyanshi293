// Reverse_Array

#include <stdio.h>
int main()
{
    int a[10],n,temp;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("Reversed Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

/* OUTPUT
Enter size: 8
Enter elements: 1 2 3 4 5 6 7 8
Reversed Array: 8 7 6 5 4 3 2 1      */