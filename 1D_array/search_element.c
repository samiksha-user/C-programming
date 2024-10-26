#include <stdio.h>
int main()
{
    int n, a[70], key, flag = 0, i,position;
    printf("enter how many terms:");
    scanf("%d", &n);
    printf("enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("enter key element:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
     if(key==a[i])
     {
     flag=1;
     position=i;
     break;
     }
    }
    if(flag==1)
    {
     printf("\nfound at a[%d]",position);
     }
     else{
        printf("\nnot found");
     }
    return 0;
}