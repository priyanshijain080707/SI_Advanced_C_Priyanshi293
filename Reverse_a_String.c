// Reverse_a_String

#include <stdio.h>

int main()
{
    char str[100];
    int len=0;

    printf("Enter a string: ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
        len++;

    printf("Reversed String = ");

    for(int i=len-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}

/* OUTPUT
Enter a string: PRIYANSHI
Reversed String = IHSNAYIRP    */