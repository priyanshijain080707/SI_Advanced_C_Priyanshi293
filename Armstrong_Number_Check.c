// Armstrong_Number_Check

#include <stdio.h>
int main()
{
    int n, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for(; n > 0; n /= 10)
    {
        digit = n % 10;
        sum += digit * digit * digit;
    }
    if(temp == sum)
        printf("%d is Armstrong", temp);
    else
        printf("%d is Not Armstrong", temp);
    return 0;
}

/* OUTPUT
Enter a number: 153
153 is Armstrong

Enter a number: 234
234 is Not Armstrong   */