// Palindrome_number_Check

#include <stdio.h>

int main()
{
    int n, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    for(; n > 0; n /= 10)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
    }

    if(temp == rev)
        printf("%d is Palindrome", temp);
    else
        printf("%d is Not Palindrome", temp);

    return 0;
}

/* OUTPUT
Enter a number: 121
121 is Palindrome

Enter a number: 456
456 is Not Palindrome   */