#include <stdio.h>
int s=3;
int main() 
{
    int i,j,k,m1[s][s], m2[s][s], mul[s][s];

    printf("Enter elements of first 3x3 matrix:\n");
    for(i=0;i<s;i++)
    {
        for (j=0;j<s;j++)
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
            scanf("%d", &m2[i][j]);
        }
    }

    for(i=0;i<s;i++) 
    {
        for(j=0;j<s;j++)
        {
            for(k=0;k<s;k++) 
            {
                mul[i][j] = 0;
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for(i=0;i<s;i++) 
    {
        for(j=0;j<s;j++) 
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}