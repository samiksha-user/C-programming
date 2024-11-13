#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,sum=0,avg;
    printf("enter the value of n:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum=sum+*(p+i);
         avg=sum/n;
    }
    printf("sum of all elements=%d",sum);
    printf("average=%d",avg);
    free(p);
    return 0;
}