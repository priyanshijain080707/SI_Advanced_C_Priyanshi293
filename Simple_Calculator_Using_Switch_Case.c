// Simple_Calculator_Using_Switch_Case

#include <stdio.h>
int main()
{
    float a, b;
    char op;
    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;
        case '-':
            printf("Result = %.2f", a - b);
            break;
        case '*':
            printf("Result = %.2f", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not possible");
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}

/* OUTPUT
Enter expression (a + b): 3+8
Result = 11.00
Enter expression (a + b): 9-7
Result = 2.00
Enter expression (a + b): 5*7
Result = 35.00
Enter expression (a + b): 8/5
Result = 1.60   */
