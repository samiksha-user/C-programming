#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    int temp;
    printf("enter your no:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    printf("cubic sum of digits=%d",sum);
    if(sum==temp)
    {
        printf("\narmstrongno.");
    }
    else
    {
        printf("\nnot armstrong.");
    }
    return 0;
}