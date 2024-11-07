#include<stdio.h>
int even(int a[] ,int);
int main()
{
    int n,a[10];
    printf("enter how many no:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    even(a,n);
    return 0;
}
  int even(int a[10],int n)
  {
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        count++;
    }
    printf("no of even no=%d",count);
    return 0;
  }