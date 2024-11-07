#include<stdio.h>
void eosum(int a[],int);
int main()
{
    int a[10],n;
    printf("how many nos:");
    scanf("%d",&n);
    printf("enter the numbers:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    eosum(a,n);
    return 0;
}
void eosum(int a[],int n)
{
    int i,eosum=0;
    for(i=0;i<n;i++)
    {
       eosum=eosum+a[i]; 
    }
    printf("sum=%d",eosum);
} 