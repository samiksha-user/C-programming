#include<stdio.h>
int power(int,int);
int main()
{
    int n,b;
    printf("enter the value of b and n:");
    scanf("%d \t%d",&b,&n);
    power(b,n);
    printf("value =%d",power(b,n));
    return 0;
}
int power(int x,int m)
{   
   if(m==0)
   return 1;
    return power(x,m-1)*x;
}