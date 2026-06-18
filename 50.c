// spy number

#include <stdio.h>
int main()
{
    int num, temp, sum = 0, product = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem;
        product *= rem;
        temp /= 10;
    }
    if(sum == product)
        printf("Spy Number");
    else
        printf("Not a Spy Number");
    return 0;
}

/* output
Enter a number: 123
Spy Number 
Enter a number: 345
Not a Spy Number  */