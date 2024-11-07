#include<stdio.h>
int main()
{
    int a[100],*p,n;
    p=&a[0];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the %d elements of array\n",n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",(p+i));
    }

    printf("array elements are:\n");
    {
        for(int i=0;i<n;i++)
        {
         printf("%d\t",*(p+i));
        }
    }


    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum of array=%d",sum);

    printf("array elements in reverse order ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",*(p+i));
    }

    return 0;
}