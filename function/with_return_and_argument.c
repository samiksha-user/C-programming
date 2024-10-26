#include<stdio.h>
int add(int a,int b);
int main()
{
    int x,y,z;
    printf("enter the value of x any y");
    scanf("%d%d",&x,&y);
    z=add(x,y);
    printf("sum is %d",z);
    return 0;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
