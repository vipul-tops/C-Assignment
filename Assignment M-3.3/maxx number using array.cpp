//Write a program to find out the max number from given array 
#include <stdio.h>

int main()
{    
    int a[20], max,n,i;
    
    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    max= a[0];
    }
    for(i=1;i<n;i++)
    {
        if (a[i]>max)
        {
                max=a[i];
        }
    }
    
    printf("Maximum element is %d.\n",max);
    return 0;    
}
