#include<stdio.h>
#include<math.h>
int main()
{
    int a[3][3],i,j,sum=0;
    float srt;
    printf("enter the elements:");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
        scanf("%d",&a[i][j]);
     }
    }
    printf("in matrix form\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
        printf("%d",a[i][j]);
     }
     printf("\n");
    }
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       sum=sum+(a[i][j]*a[i][j]); 
     }
    }
    srt=sqrt(sum);
    printf("sum=%d",sum);
    printf("square root =%f",srt);
    return 0;
    
    
}