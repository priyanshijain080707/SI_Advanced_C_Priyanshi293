// Check_Armstrong_Number_Using_Function

#include <stdio.h>

int armstrong(int n)
{
    int temp=n,sum=0,d;

    while(n>0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }

    if(temp==sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}

/* OUTPUT
Enter a number: 521
Not Armstrong Number
Enter a number: 153
Armstrong Number   */
