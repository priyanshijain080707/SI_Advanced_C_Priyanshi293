// Check_Whether_a_Number_is_Even_or_Odd_(Using_Modulus)

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

/* OUTPUT
Enter a number: 68
Even
   */