// Calculate_Simple_Interest_and_Compound_Interest

#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t, si, ci, amount;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("Simple Interest = rs. %.2f\n", si);
    printf("Compound Interest = rs. %.2f\n", ci);
    return 0;
}

/* OUTPUT
Enter Principal, Rate and Time: 1000000 3 4
Simple Interest = rs. 120000.00
Compound Interest = rs. 125508.62   */