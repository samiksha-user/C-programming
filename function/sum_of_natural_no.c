#include<stdio.h>
int sum(int);
int main()
{
    int n,i,s;
    printf("enter how many numbers:");
    scanf("%d",&n);
    s=sum(n);
    printf("sum is %d\t",s);
    return 0;
}
int sum(int x)
{
    int i;
    int s=0;
    for(i=1;i<=x;i++)
    {
    s=s+i;
    }
    return(s);
}