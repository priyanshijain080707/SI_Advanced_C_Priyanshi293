// Trapping_Rain_Water_Problem

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of buildings: ");
    scanf("%d",&n);
    int h[n];
    printf("Enter heights:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&h[i]);
    int water=0;
    for(int i=1;i<n-1;i++)
    {
        int left=h[i];
        int right=h[i];
        for(int j=0;j<i;j++)
            if(h[j]>left)
                left=h[j];
        for(int j=i+1;j<n;j++)
            if(h[j]>right)
                right=h[j];
        int minHeight=(left<right)?left:right;
        water+=minHeight-h[i];
    }
    printf("Water Trapped = %d",water);
    return 0;
}

/* OUTPUT
Enter number of buildings: 5
Enter heights:
3 0 4 0 5
Water Trapped = 7    */