// Expression_Evaluator

#include <stdio.h>
int main()
{
    float a,b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%f %c %f",&a,&op,&b);
    switch(op)
    {
        case '+': printf("Result = %.2f",a+b); break;
        case '-': printf("Result = %.2f",a-b); break;
        case '*': printf("Result = %.2f",a*b); break;
        case '/': printf("Result = %.2f",a/b); break;
        default : printf("Invalid Operator");
    }
    return 0;
}

/* OUTPUT

Enter expression (a op b): 4-5
Result = -1.00

Enter expression (a op b): 2+4
Result = 6.00

Enter expression (a op b): 2*4
Result = 8.00

Enter expression (a op b): 4/2
Result = 2.00    */
