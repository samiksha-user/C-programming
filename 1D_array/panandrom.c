#include <stdio.h>
int main()
{
    int a1[50], i, a2[50], n = 3, flag = 1;
    // printf("enter how many elements:");
    // scanf("%d,&n");
    printf("enter your elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (i = 0; i < n; i++)
    {
        a2[i] = a1[n - 1 - i];
    }
    for (i = 0; i < n; i++)
    {
        if (a1[i] != a2[i])
            flag = 0;
    }
    if (flag == 0)
    {
        printf("no prnadrom");
    }
    else
    {
        printf("panadrom");
    }

    return 0;
}