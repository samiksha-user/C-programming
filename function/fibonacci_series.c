#include<stdio.h>
int fib(int num);
int main()
{
int n;
printf("enter how many numbers:");
scanf("%d",&n);
fib(n);
return 0;
}
int fib(int num)
{
    int c,i;
      int a=0;
    int b=1;
    printf("%d \t %d",a,b);
    for(i=0;i<num-2;i++)
    {
      
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}