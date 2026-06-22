// Find_the_Largest_of_Three_Numbers

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c)
        printf("Largest = %d", a);
    else if(b >= a && b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);
    return 0;
}

/* OUTPUT
Enter three numbers: 34 56 21
Largest = 56   */