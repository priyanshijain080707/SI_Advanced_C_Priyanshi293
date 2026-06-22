// Check_if_a_Character_is_a_Vowel_or_Consonant

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}

/*OUTPUT
Enter an alphabet: P
Consonant
Enter an alphabet: U
Vowel   */