// Sum_Of_Digits_of_a_Nummber

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(; n > 0; n /= 10)
    {
        sum += n % 10;
    }
    printf("Sum of Digits = %d", sum);
    return 0;
}

/* OUTPUT
Enter a number: 4567
Sum of Digits = 22    */