// Word_Frequency_Counter

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    char word[20][20];
    int count[20]={0};
    printf("Enter sentence:\n");
    fgets(str,sizeof(str),stdin);
    int n=0;
    char *token=strtok(str," \n");
    while(token!=NULL)
    {
        int found=0;
        for(int i=0;i<n;i++)
        {
            if(strcmp(word[i],token)==0)
            {
                count[i]++;
                found=1;
                break;
            }
        }
        if(!found)
        {
            strcpy(word[n],token);
            count[n]=1;
            n++;
        }
        token=strtok(NULL," \n");
    }
    printf("\nWord Frequency:\n");
    for(int i=0;i<n;i++)
        printf("%s = %d\n",word[i],count[i]);
    return 0;
}

/* OUTPUT
Enter sentence:
My name is Priyanshi Jain, My college is ABESIT, My secion is 11

Word Frequency:
My = 3
name = 1
is = 3
Priyanshi = 1
Jain, = 1
college = 1
ABESIT, = 1
secion = 1
11 = 1    */