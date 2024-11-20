#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("enter the term you want to generate:");
    scanf("%d",&n);
    int f=fib(n);
     printf("fibonacci series of %dth term=%d",n,f);
     return 0;
}
int fib(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}