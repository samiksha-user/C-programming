#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("how many terms you want to generate:");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     printf("%d\t",fib(i));
    // }
    fib(5);
}
int fib(int n)
{  
    int f;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    f=fib(n-1)+fib(n-2);
    printf("%d\t",f);
    return f;
}