#include<stdio.h>
void swap(int a,int b);
int main()
{
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("before calling x=%d\ty=%d",x,y);
    swap(x,y);
    printf("\nafter calling x=%d\ty=%d",x,y);
    return 0;

}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b=temp;
    printf("\na=%d\tb=%d",a,b);
}