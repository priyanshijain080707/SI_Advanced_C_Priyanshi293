// Convert_Temperature_(Celsius_Fahrenheit)

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f", fahrenheit);
    return 0;
}

/* OUTPUT
Enter temperature in Celsius: 37
Temperature in Fahrenheit = 98.60   */