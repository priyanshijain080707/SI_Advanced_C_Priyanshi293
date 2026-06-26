// Input_and_Print_Array_Using_Pointers

#include <stdio.h>
int main()
{
    int a[10],n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array Elements: ");
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
    return 0;
}

/* OUTPUT
Enter size: 6
Enter elements: 1 2 34 56 78 90
Array Elements: 1 2 34 56 78 90     */