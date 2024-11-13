#include<stdio.h>
void display(int a[20],int *p);
int main()
{
int a[20],i,*p;
p=&a[0];
printf("enter array elements:");
for(i=0;i<5;i++)
{
    scanf("%d",(p+i));
}
display(a,p);
}
void display(int a[20],int *p)
{
    int i;
    p=&a[0];
    printf("array elements are\n");
    for(i=0;i<5;i++)
{
    printf("%d\t",*(p+i));
}
}