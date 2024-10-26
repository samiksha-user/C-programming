#include <stdio.h>
int main()
{
    int n, a[100], b[100];
    printf("enter how many terms:");
    scanf("%d", &n);
    int i;
    printf("enter %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements of a are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("array elements of b are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}