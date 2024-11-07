#include<stdio.h>
void display(int d[10][10],int m,int n);
void evensum(int s[10][10],int m,int n);
void transpose(int t[10][10],int m,int n);
void diagonalsum(int g[10][10],int m,int n);
int main()
{
    int i,j,a[10][10],m,n;
    printf("enter the size of row and column:");
    scanf("%d%d",&m,&n);
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  display(a,m,n);
  evensum(a,m,n);
  transpose(a,m,n);
  diagonalsum(a,m,n);
}
void display(int d[10][10],int m,int n)
{
    int i,j;
    printf("matrix form\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}
void evensum(int s[10][10],int m,int n)
{
    int i,j,esum=0,osum=0,ecount=0,ocount=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          if(s[i][j]%2==0)
          {
          ecount++;
          esum=esum+s[i][j];
          }
          else
          {
            ocount++;
            osum=osum+s[i][j];
          }
        }
    }
     printf("\nsum of even no=%d",esum);
     printf("\ntotal no of even no=%d",ecount);
      printf("\nsum of odd no=%d",osum);
     printf("\ntotal no of odd no=%d",ocount);
}
void transpose(int t[10][10],int m,int n)
{
    int i,j;
    printf("\ntranspose matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",t[j][i]);
        }
        printf("\n");
    }
}
    
void diagonalsum(int g[10][10],int m,int n)
{
   int i,j,dsum=0;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            dsum=dsum+g[i][j];
        }
    }
    printf("\nsum of diagonal=%d",dsum);
}