// Call_by_Value

#include <stdio.h>

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

    printf("Before swapping: %d %d\n",a,b);
}

int main()
{
    int a=10,b=20;

    swap(a,b);

    printf("After swapping: %d %d",a,b);

    return 0;
}

/* OUTPUT
Before swapping: 20 10
After swapping: 10 20   */