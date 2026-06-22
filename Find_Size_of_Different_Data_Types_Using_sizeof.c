// Find_Size_of_Different_Data_Types_Using_sizeof

#include <stdio.h>
int main()
{
    printf("Size of char = %lu bytes\n", sizeof(char));
    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Size of float = %lu bytes\n", sizeof(float));
    printf("Size of double = %lu bytes\n", sizeof(double));
    return 0;
}

/* OUTPUT
Size of char = 1 bytes
Size of int = 4 bytes
Size of float = 4 bytes
Size of double = 8 bytes   */