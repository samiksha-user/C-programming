#include<stdio.h>
int main()
{
    int a[3][3],i,j,key,flag=0,c,b;
    printf("enter array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("in matrix form\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter your key element:");
    scanf("%d",&key);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(key=a[i][j])
            flag=1;
            c=i;
            b=j;
        }
    }
    if(flag==1)
    printf("found at a[%d][%d]",c,b);
    else
    printf("not found");
    return 0;
}