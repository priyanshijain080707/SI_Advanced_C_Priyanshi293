// Dutch_National_Flag_Problem
#include <stdio.h>
int main()
{
    int arr[7]={1, 0, 2, 0, 2, 1, 0};
    int zero = 0, one = 0, two = 0;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == 0)
            zero++;
        else if(arr[i] == 1)
            one++;
        else if(arr[i] == 2)
            two++;
    }
    int k = 0;
    for(int i = 0; i < zero; i++)
    {
        arr[k++] = 0;
    }
    for(int i = 0; i < one; i++)
    {
        arr[k++] = 1;
    }
    for(int i = 0; i < two; i++)
    {
        arr[k++] = 2;
    }
    printf("Sorted Array:\n");
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/* OUTPUT
0 0 0 1 1 2 2   */
