#include<stdio.h>
int interest(int p,int t,int r);
int main()
{
     int s,x,y,z;
    printf("enter the value of principle,time,and rate:");
    scanf("%d%d%d",&x,&y,&z);
    s=interest(x,y,z);
    printf("simple interest =%d",s);
    return 0;
}
int interest(int p,int t,int r)
{
    int i;
    i=(p*t*r)/100;
    return i;
}
