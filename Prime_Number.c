// Prime_Number

#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }
    if(count == 2)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);
    return 0;
}

/* OUTPUT
Enter a number: 4
4 is Not Prime

Enter a number: 5
5 is Prime   */