// Sum_of_Natural_Numbers_Using_Recursion

#include <stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("Enter the number range to add: ");
    scanf("%d",&n);
    printf("Sum = %d",sum(n));
    return 0;
}

/* OUTPUT
Enter the number range to add: 78
Sum = 3081    */