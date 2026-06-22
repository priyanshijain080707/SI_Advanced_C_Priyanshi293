//Swap_Two_Numbers_Using_a_Temporary_Variable
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, sb);
    return 0;
}

/* OUTPUT
Enter two numbers: 3 4
After swapping: a = 4, b = 3   */