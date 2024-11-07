#include<stdio.h>
int main()
{
    int a[10],n,i,key,*p,flag=0,po;
    p=&a[0];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
     printf("array of elements are\n");
     for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
     printf("enter the key elements");
     scanf("%d",&key);
     for(i=0;i<n;i++)
     {
        if(key==*(p+i))
        {
        flag=1;
        po=i;
        }
     }
     if(flag==1)
     printf("found at a[%d]",po);
     else
     printf("not found");
     return 0;

}