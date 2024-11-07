#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    printf("prime no");
    else
    printf("not prime");
    return 0;

}