// Find_First_and_Last_Position

#include <stdio.h>
int main()
{
    int a[20],n,key;
    int first=-1,last=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            if(first==-1)
            first=i;
            last=i;
        }
    }
    printf("First Position = %d\n",first);
    printf("Last Position = %d",last);
    return 0;
}

/* OUTPUT

ELEMENT AVAILABLE ONLY ONCE
Enter size: 8
Enter elements: 1 2 3 4 5 6 7 8
Enter element: 7
First Position = 6
Last Position = 6

ELEMENT NOT AVAILABLE
Enter size: 8
Enter elements: 22 33 44 55 66 77 88 99
Enter element: 5
First Position = -1
Last Position = -1

ELEMENT AVAILABLE MORE THAN ONCE
Enter size: 8
Enter elements: 1 2 3 4 2 5 2 7
Enter element: 2
First Position = 1
Last Position = 6      */



