#include<stdio.h>
int area(int r);
int main()
{
    int a1,a2,r1,r2;
    printf("enter the radius of circles:");
    scanf("%d%d",&r1,&r2);
    a1=area(r1);
    a2=area(r2);
    printf("area=%d",a1);
    printf("area=%d",a2);
    return 0;
}
int area(int r)
{
    int a;
    float pi=3.14;
    a=pi*r*r;
    return a ;

}