#include<stdio.h>
int max(int,int);
int main()
{
    int a,b;
    printf("enter your no:");
    scanf("%d%d",&a,&b);
    max(a,b);
    printf("max no =%d",max(a,b));
    return 0;
}
int max(int x,int y)
{
if(x>y)
//printf("max no =%d",x);
return x;
else 
return y;
}