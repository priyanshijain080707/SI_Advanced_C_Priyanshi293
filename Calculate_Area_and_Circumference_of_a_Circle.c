//Calculate_Area_and_Circumference_of_a_Circle

#include <stdio.h>
int main()
{
    float radius, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", circumference);
    return 0;
}

/* OUTPUT
Enter radius: 5
Area = 78.54
Circumference = 31.42  */