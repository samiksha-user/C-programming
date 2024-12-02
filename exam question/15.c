#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    printf("enter how many numbers:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter your numbers:");
    for(i=0;i<n;i++)
    scanf("%d",(p+i));
    int largest=*p;
    int smallest=*p;
    for(i=0;i<n;i++)
    {
        if(largest<*(p+i))
        largest=*(p+i);
        if(smallest>*(p+i))
        smallest=*(p+i);
    }
    printf("largest value=%d\tsmallest value=%d",largest,smallest);
    return 0;
}