#include<stdio.h>
int sum(int a[]);
int out(int a[]);
int main()
{
  int n,a[10],s;
  printf("enter the numbers:");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  out(a);
  s=sum(a);
  printf("\nsum is %d",s);
  return 0;
}
int out(int a[])
{
    int i;
    for(int i=0;i<5;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}
int sum(int a[])
{
   int i,s;
   for(int i=0;i<5;i++)
  {
    s=s+a[i];
  }
  printf("sum is %d",s);
  return 0;
}