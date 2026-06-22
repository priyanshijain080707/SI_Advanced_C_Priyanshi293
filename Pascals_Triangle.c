// Pascals_Triangle

#include <stdio.h>
int main()
{
    int n, i, j;
    int coef;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
            printf("  ");
        coef = 1;
        for(j = 0; j <= i; j++)
        {
            printf("    %d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
/* OUTPUT
Enter number of rows: 5
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1
*/
