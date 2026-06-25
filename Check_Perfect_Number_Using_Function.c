// Check_Perfect_Number_Using_Function

#include <stdio.h>

int perfect(int n)
{
    int sum=0;

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(perfect(n))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}

/* OUTPUT
Enter a number: 566
Not Perfect Number
Enter a number: 6
Perfect Number    */