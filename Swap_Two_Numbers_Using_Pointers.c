// Swap_Two_Numbers_Using_Pointers

#include <stdio.h>
int main()
{
    int a,b,temp;
    int *p1=&a,*p2=&b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping: %d %d \n",a,b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After Swapping: %d %d",a,b);
    return 0;
}

/* OUTPUT
Enter two numbers: 34 56
Before Swapping: 34 56 
After Swapping: 56 34   */