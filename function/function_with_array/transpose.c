#include<stdio.h>
int trans(int a[10][10]);
int output(int b[10][10]);
int main()
{
    int i,a[10][10];
    printf("enter your elements:\n");
    for(i=0;i<3;i++)

    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
trans(a);
return 0;
}
int trans(int a[10][10])
{
      int i,j,b[10][10];

      for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
output(b);
    
}
int output(int b[10][10])
{
    int i;
    printf("transposed matrix\n");
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}



