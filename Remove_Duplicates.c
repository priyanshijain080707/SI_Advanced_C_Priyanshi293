// Remove_Duplicates

#include <stdio.h>
int main()
{
    int a[20],n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<n-1;k++)
                    a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }
    printf("After Removing Duplicates: ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}

/* OUTPUT
Enter size: 9
Enter elements: 1 2 3 2 4 5 6 5 3
After Removing Duplicates: 1 2 3 4 5 6       */