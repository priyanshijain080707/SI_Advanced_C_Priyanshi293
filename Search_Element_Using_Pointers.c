// Search_Element_Using_Pointers

#include <stdio.h>
int main()
{
    int a[10],n,key,found=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==key)
        {
            found=1;
            break;
        }
    }
    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");
    return 0;
}

/* OUTPUT
Enter size: 5
Enter elements: 1 2 3 4 5
Enter element to search: 6
Element Not Found   
Enter size: 7
Enter elements: 2 3 4 55 67 7 3
Enter element to search: 4
Element Found   */