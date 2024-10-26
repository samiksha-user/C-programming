#include<stdio.h>
int natural(int);
int main()
{
    int n;
    printf("enter how many no:");
    scanf("%d",&n);
    printf(" first %d natural no are\n",n);
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",natural(i));
    return 0;
}
int natural(int n)
{
    if(n==0)
    return 1;
    else
    return(natural(n-1)+1);
}