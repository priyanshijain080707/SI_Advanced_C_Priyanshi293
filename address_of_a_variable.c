// address of a variable
#include <stdio.h>

int main() 
{
  int abc=12345 ;
  int *p= &abc;
  printf("%p\n",abc);
  printf("%p",*p);
    return 0;
}

/*OUTPUT
0x3039
0x3039  */