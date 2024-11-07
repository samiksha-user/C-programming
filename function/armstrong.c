#include<stdio.h>
int arm(int);
int main()
{
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    int a=arm(n);
    if(a==n)
    printf("armstrong");
    else
    printf("not armstrong");

}
int arm(int x)
{
    int rev=0,rem;
    while(x>0)
    {
        rem=x%10;
        rev=rev+rem*rem*rem;
        x=x/10;
    }
    return rev;
}