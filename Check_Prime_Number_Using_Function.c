// Check_Prime_Number_Using_Function

#include <stdio.h>

int prime(int n)
{
    int count=0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(prime(n))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}

/* OUTPUT
Enter a number: 54
Not Prime Number
Enter a number: 3
Prime Number    */