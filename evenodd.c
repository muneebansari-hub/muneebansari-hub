#include <stdio.h>
int main() {
    int n,i,arr[n],esum=0,osum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0) 
        {
            esum+=arr[i];
        } 
        else 
        {
            osum+=arr[i];
        }
    }

    printf("Sum of even numbers: %d\n", esum);
    printf("Sum of odd numbers: %d\n", osum);

    return 0;
}