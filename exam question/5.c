//second largest age

#include<stdio.h>
int main()
{
    int a[50],i,j,temp;
    printf("enter the ages of employee:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ages of employees are\n");
    for(i=0;i<5;i++)
    {
    printf("%d\t",a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("ages in ascending order\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("second largest age=%d",a[1]);

    // for(i=0;i<5;i++)
    // {
    //     printf("second largest age=%d",a[1]);
    //     break;
    // }
    return 0;
}