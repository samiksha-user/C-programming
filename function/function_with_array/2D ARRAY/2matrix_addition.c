#include<stdio.h>
void input(int d1[10][10],int d2[10][10],int m,int n);
void addition(int s1[10][10],int s2[10][10],int m,int n);
int main()
{
    int a[10][10],b[10][10],i,j,m,n;
    printf("enter the size of row and column:");
    scanf("%d%d",&m,&n);
    printf("enter the element of 1st matrix:");
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

    input(a,b,m,n);
    addition(a,b,m,n);

}
void input(int d1[10][10],int d2[10][10],int m,int n)
{
    int i,j;
    printf("1st matrix\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d1[i][j]);
        }
        printf("\n");
    }

    printf("2nd matrix\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d2[i][j]);
        }
        printf("\n");
    }
}
void addition(int s1[10][10],int s2[10][10],int m,int n)
{
    int i,j,z[10][10];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            z[i][j]=s1[i][j]+s2[i][j];
        }
    }
 printf("addition matrix is \n");
 for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}