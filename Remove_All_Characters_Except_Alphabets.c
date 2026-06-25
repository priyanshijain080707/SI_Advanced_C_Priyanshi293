// Remove_All_Characters_Except_Alphabets

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    printf("Result = ");

    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            printf("%c",str[i]);
    }

    return 0;
}

/* OUTPUT
Enter a string: PRIYANSHI123JAIN
Result = PRIYANSHIJAIN    */