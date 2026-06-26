// malloc

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[10]={0};
    printf("Address of a= %p \n",&a);
    int *ptr=(int*)malloc(10*sizeof(int));
    printf("Address of ptr= %p \n",&ptr);
    printf("Value of a= %d \n",a);
    return 0;
}

/* OUTPUT
Address of a= 0x7ffd83a17180 
Address of ptr= 0x7ffd83a17178 
Value of a= -2086571648    */