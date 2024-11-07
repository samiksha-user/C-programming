#include<stdio.h>
int rev(int );
int main()
{
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    rev(n);
    return 0;
}
int rev(int x)
{
    int rem,rev=0;
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    printf("the reverse is %d",rev);
    return 0;
}