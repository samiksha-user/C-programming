#include<stdio.h>
int main()
{
    int a[50],b[50],i,n,c[50];
    printf("enter how many terms:");
    scanf("%d",&n);
    printf("\nenter the elements of a:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter the elements of b:\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\narray elements of a are\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\narray elements of b are\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nelements of array c\t ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;


}