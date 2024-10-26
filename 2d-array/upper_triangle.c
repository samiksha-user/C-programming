#include <stdio.h>
int main()
{
    int m, n, a[100][100], i, j;
    printf("enter the row size and column size:");
    scanf("%d%d", &m, &n);
    printf("enter the matrix elements:");
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
     printf("matrix in upper triangle form\n");
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i<=j)
              printf("%d\t", a[i][j]);
              else
              printf("0\t");
        }
        printf("\n");
    }
    return 0;
}