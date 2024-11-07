#include<stdio.h>
int main()
{
    int a[100],n,i,*p;
    p=&a[0];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
     int esum=0,osum=0,ecount=0,ocount=0;
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        {
        esum=esum+*(p+i);
        ecount++;
        }
        else
        {
        osum=osum+*(p+i);
        ocount++;
        }
    }
    printf("sum of even elememnts=%d",esum);
    printf("\nsum of odd elememnts=%d",osum);
    printf("\nno of even elememnts=%d",ecount);
    printf("\nno of odd elememnts=%d",ocount);
    return 0;
}