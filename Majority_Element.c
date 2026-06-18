// Majority_Element_(>N/2_times)
#include <stdio.h>
int main() 
{
    int arr[12] = {2, 2, 1, 2, 3, 2, 2, 1, 3, 2, 2, 2};
    int majority = arr[0];
    int count = 1;
    for (int i = 1; i < 12; i++) {
        if (arr[i] == majority)
            count++;
        else
            count--;
        if (count == 0) {
            majority = arr[i];
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < 12; i++) {
        if (arr[i] == majority)
            count++;
    }
    if (count > 12 / 2)
        printf("Majority Element = %d", majority);
    else
        printf("No Majority Element");
    return 0;
}
/* OUTPUT
Majority Element = 2   */
