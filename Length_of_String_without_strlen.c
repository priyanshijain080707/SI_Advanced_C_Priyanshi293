// Length_of_String_without_strlen

#include <stdio.h>

int main()
{
    char str[100];
    int len=0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    for(int i=0;str[i]!='\0';i++)
        len++;

    printf("Length = %d",len);

    return 0;
}

/* OUTPUT
Enter a string: PRIYANSHI JAIN
Length = 14    */