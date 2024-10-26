#include <stdio.h>
int main()
{
    int n, a[100], i;
    printf("how many number ypu want for calculation:");
    scanf("%d", &n);
    printf("enter your numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("entered numbers are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nnumbers in reveresed order\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}