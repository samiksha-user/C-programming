#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter your numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("your entered numbers are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
    return 0;

}