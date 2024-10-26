#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("enter your numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your entered numbers are\n");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}