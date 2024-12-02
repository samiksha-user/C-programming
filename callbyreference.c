#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=9,b=7;
    printf("a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\tb=%d\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d\tb=%d\n",*a,*b);
}