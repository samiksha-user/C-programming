#include<stdio.h>
int power(int,int);
int main()
{
    int x,n,p;
    printf("enter the value of x and n:");
    scanf("%d%d",&x,&n);
    p=power(x,n);
    printf("%d",p);
    return 0;
}
int power(int a,int b)
{
    if(b==0)
    return 1;
    else
    return power(a,b-1)*a;
}