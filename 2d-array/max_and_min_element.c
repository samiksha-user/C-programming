#include <stdio.h>
#define m 3
#define n 4
int main()
{
    int a[m][n], i, j, max, min;
    printf("enter the matrix element\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
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
    max = a[0][0];
    min = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    }
    printf("maximum element=%d", max);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
        }
    }
    printf("minimum element=%d", min);
    return 0;
}