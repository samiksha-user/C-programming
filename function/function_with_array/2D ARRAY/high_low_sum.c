#include <stdio.h>
void display(int a[10][10], int m, int n);
void highlow(int h[10][10],int m,int n);
void sum(int s[10][10],int m,int n);
int main()
{
    int a[10][10], m, n;
    printf("enter the value of row and column:");
    scanf("%d%d", &m, &n);
    printf("enter the elements of array\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    display(a, m, n);
    highlow(a,m,n);
    sum(a,m,n);
    return 0;
}

void display(int a[10][10], int m, int n)
{
    int i, j;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void highlow(int h[10][10],int m,int n)
{
    int high,low;
    high=h[0][0];
    low=h[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(high<h[i][j])
            high=h[i][j];
            if(low>h[i][j])
            low=h[i][j];
            
        }
    }
    printf("highest no=%d",high);
    printf("lowerst no=%d",low);
}
void sum(int s[10][10],int m,int n)
{
    int sum=0,i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+s[i][j];
        }
    }
    printf("sum of all elements=%d",sum);
}