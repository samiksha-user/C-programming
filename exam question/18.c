#include<stdio.h>
int main()
{
    int m,n,a[50][50],b[50][50],c[50][50],i,j;
    printf("enter the value of m and n");
    scanf("%d%d",&m,&n);
    printf("enter the elements of 1st matrix:");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("enter the elements of 2nd matrix:");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    printf("1st matrix is\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
     printf("2nt matrix is\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("sum of matrix is\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    }
    return 0;

}