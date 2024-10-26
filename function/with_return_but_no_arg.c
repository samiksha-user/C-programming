#include<stdio.h>
int add();
int main()
{
    int s;
    s=add();
    printf("sum is %d",s);
    return 0;
}
int add()
{
    int x,y,z;
    printf("enter two values:");
    scanf("%d%d",&x,&y);
    z=x+y;
    return z;
}