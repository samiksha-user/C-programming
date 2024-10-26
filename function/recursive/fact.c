#include<stdio.h>
int fact(int n);
int main()
{
    int n,z;
    printf("enter your no:");
    scanf("%d",&n);
    z=fact(n);
    printf("factorial =%d",z);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return(n*fact(n-1));
}