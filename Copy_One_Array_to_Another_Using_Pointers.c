// Copy_One_Array_to_Another_Using_Pointers

#include <stdio.h>
int main()
{
    int a[10],b[10],n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        *(b+i)=*(a+i);
    printf("Copied Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}

/* OUTPUT
Enter size: 8
Enter elements: 11 22 33 44 55 66 77 88
Copied Array: 11 22 33 44 55 66 77 88    */