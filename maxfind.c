#include <stdio.h>

int main()
{
    int arr[10],i,max;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++) 
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    for (i=1;i<10;i++) 
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The greatest in 10 is: %d\n", max);
    return 0;
}