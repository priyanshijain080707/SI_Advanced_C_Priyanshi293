// Strong_Number_Check

#include <stdio.h>
int main()
{
    int n, temp, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for(; n > 0; n /= 10)
    {
        digit = n % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
    }
    if(temp == sum)
        printf("%d is Strong", temp);
    else
        printf("%d is Not Strong", temp);
    return 0;
}

/* OUTPUT
Enter a number: 45
45 is Not Strong

Enter a number: 145
145 is Strong    */