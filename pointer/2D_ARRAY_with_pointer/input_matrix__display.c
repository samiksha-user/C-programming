#include<stdio.h>
int main()
{
    int *p,a[3][3],i,j;
    p=&a[0][0];
    printf("enter the array elements:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",p+3*i+j);
        }
    }
    printf("matrix ia \n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
        printf("%d\t",*(p+3*i+j));
     }
     printf("\n");
    }
    return 0;
}