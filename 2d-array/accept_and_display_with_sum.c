#include<stdio.h>
#define m 3
#define n 4
int main()
{
    int a[m][n],i,j,sum=0;
    printf("enter the matrix element\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("elements in matrix form\n");
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
 for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum is %d",sum);
        
    return 0;
}
