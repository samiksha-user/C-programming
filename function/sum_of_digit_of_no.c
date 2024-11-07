#include<stdio.h>
int sum(int );
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int s=sum(n);
    printf("sum=%d",s);
}
int sum(int x)
{
    int rev=0,rem;
    while(x>0)
    {
      rem=x%10;
      rev=rev+rem;
      x=x/10;
    }
    return rev;
}