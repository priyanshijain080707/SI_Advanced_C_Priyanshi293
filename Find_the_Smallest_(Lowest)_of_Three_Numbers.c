// Find_the_Smallest_(Lowest)_of_Three_Numbers

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a <= b && a <= c)
        printf("Smallest = %d", a);
    else if(b <= a && b <= c)
        printf("Smallest = %d", b);
    else
        printf("Smallest = %d", c);
    return 0;
}

/* OUTPUT
Enter three numbers: 56 34 12
Smallest = 12   */