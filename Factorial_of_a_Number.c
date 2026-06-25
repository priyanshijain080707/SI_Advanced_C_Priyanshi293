// Factorial_of_a_Number

#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial = %d", fact);
    return 0;
}

/* OUTPUT
Enter a number: 5
Factorial = 120   */
