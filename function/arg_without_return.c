#include<stdio.h>
void add(int a,int b);
int main()
{
    int x,y;
    printf("enter the values:");
    scanf("%d%d",&x,&y);
    add(x,y);
    return 0;
}
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum is %d",sum);
}