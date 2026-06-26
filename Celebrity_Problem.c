// Celebrity_Problem

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of people: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int celeb=0;
    for(int i=1;i<n;i++)
    {
        if(a[celeb][i]==1)
            celeb=i;
    }
    int found=1;
    for(int i=0;i<n;i++)
    {
        if(i!=celeb)
        {
            if(a[celeb][i]==1 || a[i][celeb]==0)
            {
                found=0;
                break;
            }
        }
    }
    if(found)
        printf("Celebrity = %d",celeb);
    else
        printf("No Celebrity");
    return 0;
}

/* OUTPUT
Enter number of people: 3
Enter matrix:
0 1 1
0 0 1
0 0 0
Celebrity = 2    */