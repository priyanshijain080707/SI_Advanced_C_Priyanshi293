// Fahrenheit_to_Celsius

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2f", celsius);
    return 0;
}

/* OUTPUT
Enter temperature in Fahrenheit: 37
Temperature in Celsius = 2.78   */