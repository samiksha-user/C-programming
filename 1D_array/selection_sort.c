#include <stdio.h>
int main()
{
    int n, a[50], i, j, temp;
    printf("enter how many terms:");
    scanf("%d", &n);
    printf("enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("before sorting array elements are:");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nnumbers in ascending order are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}