// Call_by_Reference

#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10,b=20;
 
    printf("Before swapping %d %d \n",a,b);

    swap(&a,&b);

    printf("After swapping %d %d",a,b);

    return 0;
}

/* OUTPUT
Before swapping 10 20 
After swapping 20 10   */