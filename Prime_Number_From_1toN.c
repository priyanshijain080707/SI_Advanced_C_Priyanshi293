// Prime_Number_From_1toN

#include <stdio.h>
int main()
{
    int n, count;
    printf("Enter a range: ");
    scanf("%d", &n);
    printf("Prime Numbers: ");
    for(int i = 2; i <= n; i++)
    {
        count = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
            printf("%d ", i);
    }
    return 0;
}

/* OUTPUT
Enter a range: 100
Prime Numbers: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97    */