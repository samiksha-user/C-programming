#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i;
printf("enter the value of n:");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("enter the %d numbers",n);
for(i=0;i<n;i++)
{
    scanf("%d",(p+i));
}
printf("entered numbers are:");
for(i=0;i<n;i++)
{
    printf("%d\t",*(p+i));
}

p=malloc(9);
free(p);
return 0;
}