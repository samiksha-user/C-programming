#include <stdio.h>
int main()
{
    int n;
    printf("how many numbers you want for calculation:");
    scanf("%d", &n);
    int arr[100], i;
    printf("enter your numbers:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("entered numbers are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    int sm = arr[0];
    for (i = 1; i < n; i++)
    {
        if (sm > arr[i])
        sm = arr[i];
    }
    printf("smallest number=%d", sm);
    int lr=arr[0];
    for (i = 1; i < n; i++)
    {
        if (lr < arr[i])
        lr = arr[i];
    }
    printf("\nlargest number=%d", lr);
    return 0;
}