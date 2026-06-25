// Compare_Strings_without_strcmp

#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int flag=1;

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}

/* OUTPUT
Enter first string: PRIYANSHI
Enter second string: JAIN
Strings are Not Equal    */