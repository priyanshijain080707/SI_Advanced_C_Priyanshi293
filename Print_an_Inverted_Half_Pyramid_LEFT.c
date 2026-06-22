// Print_an_Inverted_Half_Pyramid_LEFT

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/* OUTPUT
Enter number of rows: 5
*****
****
***
**
*

*/