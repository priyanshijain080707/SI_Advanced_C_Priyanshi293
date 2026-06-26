// GCD_Using_Recursion

#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("GCD = %d",gcd(a,b));
    return 0;
}

/* OUTPUT
Enter two numbers: 55 44
GCD = 11    */