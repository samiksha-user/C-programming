#include<stdio.h>
int main()
{
    int i,n;
    printf("enter your no:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    {
            printf("prime no");
    }
        else
        {
            printf("composite no");
        }
    return 0;
}