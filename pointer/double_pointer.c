#include<stdio.h>
int main()
{
    int a=8,*p,**q;
    p=&a;
    q=&p;
    printf("\nvalue of a=%d",*p);
    printf("\nvalue of a=%d",**q);
    printf("\naddress of a=%d",&a);
    printf("\naddress of a=%d",p);
    printf("\naddress of a=%d",*q);

    printf("\naddress of p=%d",&p);
    printf("\naddress of p=%d",q);


    return 0;
}