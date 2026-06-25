// Sort_Strings_Alphabetically

#include <stdio.h>

int main()
{
    char str[5][20], temp[20];

    printf("Enter 5 strings:\n");

    for(int i=0;i<5;i++)
        scanf("%s",str[i]);

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(str[i][0] > str[j][0])
            {
                for(int k=0;str[i][k]!='\0' || str[j][k]!='\0';k++)
                {
                    temp[k]=str[i][k];
                    str[i][k]=str[j][k];
                    str[j][k]=temp[k];
                }
            }
        }
    }

    printf("Sorted Strings:\n");

    for(int i=0;i<5;i++)
        printf("%s\n",str[i]);

    return 0;
}

/* OUTPUT
Enter 5 strings:
PRIYANSHI
JAIN
ABESIT
COLLEGE
STUDENT
Sorted Strings:
ABESIT
COLLEGE
JAIN
PRIYANSHI
STUDENT    */