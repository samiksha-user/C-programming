#include<stdio.h>
int sum(int );
int main()
{
  int n,a[10];
  printf("enter how many numbers:");
  scanf("%d",&n);
  int s=sum(n);
  printf("sum =%d",s);
  return 0;
}
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return(n+sum(n-1));
}