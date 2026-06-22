// Find_the_Roots_of_a_Quadratic_Equation

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root1, root2;
    printf("Enter a, b and c (values of coefficient from the equation): ");
    scanf("%f%f%f", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are Real and Distinct\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2*a);
        printf("Roots are Real and Equal\n");
        printf("Root1 = Root2 = %.2f", root1);
    }
    else
    {
        printf("Imaginary Roots");
    }
    return 0;
}

/* OUTPUT
Enter a, b and c (values of coefficient from the equation): 4 6 8
Imaginary Roots

Enter a, b and c (values of coefficient from the equation): 1 -5 6
Roots are Real and Distinct
Root1 = 3.00
Root2 = 2.00   */