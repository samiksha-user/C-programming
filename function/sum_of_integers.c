#include<stdio.h>
int add(int a,int b);
int main()
{
int a=5,b=8,c;
c=add(a,b);
printf("sum is %d",c);
return 0;
}
int add(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}