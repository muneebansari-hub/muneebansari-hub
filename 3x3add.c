#include <stdio.h>
int s=3;
int main()
{
    int i,j,m1[s][s], m2[s][s], sum[s][s];

    printf("Enter elements of first 3x3 matrix:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++) 
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++) 
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (i=0;i<s;i++) 
    {
        for (j=0;j<s;j++) 
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}