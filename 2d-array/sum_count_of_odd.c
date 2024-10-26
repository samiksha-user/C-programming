#include<stdio.h>
int main()
{
    int a[3][3],i,j,ocount=0,osum=0;
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
            if(a[i][j]%2!=0)
            {
                ocount++;
                osum=osum+a[i][j];
            }
        }
    }
    printf("sum of odd number=%d \n total odd numbers=%d",osum,ocount);
    return 0;
}