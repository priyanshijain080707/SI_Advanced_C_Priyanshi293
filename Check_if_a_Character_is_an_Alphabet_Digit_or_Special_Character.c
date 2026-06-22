// Check_if_a_Character_is_an_Alphabet_Digit_or_Special_Character

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}

/* OUTPUT
Enter a character: U
Alphabet
Enter a character: 5
Digit
Enter a character: &
Special Character   */