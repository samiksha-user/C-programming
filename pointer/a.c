#include<stdio.h>
int main()
{
    int a,*p;
    p=&a;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("\nvalue of a=%d",a);
    printf("\nvalue of a=%d",*p);
    printf("\naddress of a=%u",&a);
    printf("\naddress of a=%u",p);

    return 0;
}