#include<stdio.h>
void matrix(int b[3][3]);
int main()
{
  int a[3][3];
  printf("enter the matrix elements\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  matrix(a);
  return 0;
}
   void matrix(int b[3][3])
   {
     int i,j;
     printf("in matrix form\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
     }
   }