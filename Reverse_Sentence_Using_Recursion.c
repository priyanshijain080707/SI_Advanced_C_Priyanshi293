// Reverse_Sentence_Using_Recursion

#include <stdio.h>
void reverse()
{
    char ch;
    scanf("%c",&ch);
    if(ch!='\n')
    {
        reverse();
        printf("%c",ch);
    }
}
int main()
{
    printf("Enter a sentence: ");
    reverse();
    return 0;
}

/* OUTPUT
Enter a sentence: My name is Priyanshi Jain.
.niaJ ihsnayirP si eman yM    */