#include<stdio.h>
int main()
{
    int a[3][4],i,j,ecount=0,esum=0;
    printf("enter the array elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]%2==0)
            {
                ecount++;
                esum=esum+a[i][j];
            }
        }
    }
    printf("sum of even number=%d \n total even numbers=%d",esum,ecount);
    return 0;
}