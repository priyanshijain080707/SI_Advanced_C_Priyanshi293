// Fibonacci_Sequence_up_to_N_Terms

#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

/* OUTPUT
Enter number of terms: 8
Fibonacci Series: 0 1 1 2 3 5 8 13    */
