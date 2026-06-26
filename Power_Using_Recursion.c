// Power_Using_Recursion

#include <stdio.h>
int power(int a,int b)
{
    if(b==0)
        return 1;
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    printf("Enter base and power: ");
    scanf("%d%d",&a,&b);
    printf("Answer = %d",power(a,b));
    return 0;
}

/* OUTPUT
Enter base and power: 6 2
Answer = 36    */