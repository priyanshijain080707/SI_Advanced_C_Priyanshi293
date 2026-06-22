// Calculate_ASCII_Value_of_a_Character

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII Value of %c = %d", ch, ch);
    return 0;
}

/* OUTPUT
Enter a character: R
ASCII Value of R = 82   */