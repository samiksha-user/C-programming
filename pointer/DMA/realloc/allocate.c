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
printf("enter new size:");
scanf("%d",&n);
p=(int*)realloc(p,n*sizeof(int));
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
free(p);
return 0;
}