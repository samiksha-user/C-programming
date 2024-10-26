#include<stdio.h>
int main()
{
    int m1[3][3],m2[3][3],m3[3][3],i,j;
    printf("enter the element of first matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the element of second matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }
    printf("third matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }

    return 0;

}