// Reverse_Array_Using_Pointers

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
        temp=*(a+i);
        *(a+i)=*(a+n-1-i);
        *(a+n-1-i)=temp;
    }
    printf("Reversed Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

/* OUTPUT
Enter size: 6
Enter elements: 2 3 4 45 6 77
Reversed Array: 77 6 45 4 3 2     */