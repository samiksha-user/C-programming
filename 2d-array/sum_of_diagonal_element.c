#include<stdio.h>
int main()
{
    int a[3][3],i,j,dsum=0;
    printf("enter the array elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                dsum=dsum+a[i][j];
            }
        }
    }
    printf("sum of diagonal element=%d",dsum);
    return 0;
}