// Swap_Two_Arrays_Using_Pointers

#include <stdio.h>
int main()
{
    int a[10],b[10],n,temp;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter first array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter second array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        temp=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=temp;
    }
    printf("First Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nSecond Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}

/* OUTPUT
Enter size: 7
Enter first array: 1 2 3 44 55 66 77
Enter second array: 4 5 6 11 22 33 88
First Array: 4 5 6 11 22 33 88 
Second Array: 1 2 3 44 55 66 77    */