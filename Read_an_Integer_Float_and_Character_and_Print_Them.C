// Read_an_Integer_Float_and_Character_and_Print_Them
#include <stdio.h>
int main()
{
    int num;
    float f;
    char ch;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Integer = %d\n", num);
    printf("Float = %.2f\n", f);
    printf("Character = %c\n", ch);
    return 0;
}

/* OUTPUT
Enter an integer: -2
Enter a float: 23.5
Enter a character: d
Integer = -2
Float = 23.50
Character = d   */