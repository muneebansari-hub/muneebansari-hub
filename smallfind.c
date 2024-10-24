#include<stdio.h>
int main() 
{
    int arr[10],i,min;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for (i=1;i<10;i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The small is: %d\n", min);
    return 0;
}