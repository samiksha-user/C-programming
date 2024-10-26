#include<stdio.h>
int fib(int);
int main()
{
    int n,i=0;
    printf("enter how many numbers:");
    scanf("%d",&n);
    printf("fibonacci series is\n");
    for(i=0;i<n;i++)
    printf("%d\t",fib(i));
    return 0;
}
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));


}
