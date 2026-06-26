// Add_Two_Numbers_Using_Pointers

#include <stdio.h>
int main()
{
    int a,b,*p1,*p2;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    printf("Sum = %d",*p1+*p2);
    return 0;
}

/* OUTPUT
Enter two numbers: 34 67
Sum = 101   */