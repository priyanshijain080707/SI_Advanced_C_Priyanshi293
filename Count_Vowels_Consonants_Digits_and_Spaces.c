// Count_Vowels_Consonants_Digits_and_Spaces

#include <stdio.h>

int main()
{
    char str[100];
    int v=0,c=0,d=0,s=0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                v++;
            else
                c++;
        }
        else if(str[i]>='0'&&str[i]<='9')
            d++;
        else if(str[i]==' ')
            s++;
    }

    printf("Vowels = %d\n",v);
    printf("Consonants = %d\n",c);
    printf("Digits = %d\n",d);
    printf("Spaces = %d",s);

    return 0;
}

/* OUTPUT
Enter a string: PRIYANSHI JAIN
Vowels = 5
Consonants = 8
Digits = 0
Spaces = 1   */