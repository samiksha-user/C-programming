#include<stdio.h>
int main()
{
    int a[20],*p,i,n;
    p=&a[0];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
       scanf("%d",(p+i)); 
    }

    int high=*p;
    int low=*p;
    for(i=0;i<n;i++)
    {
        if(high<*(p+i))
        high=*(p+i);
        if(low>*(p+i))
        low=*(p+i);
    }
    printf("highest element=%d",high);
        printf("lowest element=%d",low);
  return 0;
}