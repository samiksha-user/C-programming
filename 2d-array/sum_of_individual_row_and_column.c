#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
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
            sum=sum+a[i][j];
        }
        printf("sum of %d row=%d\n",i+1,sum);
        sum=0;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        printf("sum of %d column=%d\n",i+1,sum);
        sum=0;
    }
    return 0;

}
