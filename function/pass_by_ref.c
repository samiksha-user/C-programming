#include<stdio.h>
int swap(int*,int*);
int main()
{
    int a,b;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    printf(" before swap numbers are %d\t%d",a,b);
    swap(&a,&b);
    printf(" \nafter swap numbers are %d\t%d",a,b);
    return 0;
}
int swap(int *w,int *x)
{
    int temp;
    temp=*w;
    *w=*x;
    *x=temp;
     printf("\nnumbers are %d\t%d",*w,*x);

}