// Check_Whether_a_Number_is_Even_or_Odd_(Using_Bitwise_Operator)

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if((num & 1) == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

/* OUTPUT
Enter a number: 65
Odd   */