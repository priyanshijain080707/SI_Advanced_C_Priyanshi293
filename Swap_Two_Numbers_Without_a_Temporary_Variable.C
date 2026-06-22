// Swap_Two_Numbers_Without_a_Temporary_Variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}

/* OUTPUT
Enter two numbers: 3 4
After swapping: a = 4, b = 3   */