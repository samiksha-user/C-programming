#include<stdio.h>
void display(int a[]);
void sort(int a[]);

int main()
{
    int a[10],i;
    printf("enter your nos:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    display(a);
    return 0;
}
void sort(int a[10])
{
    int i;
       int temp;
    for(i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
          if(a[i]>a[j])
       {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
       }
        }
    }
   
    
}
void display(int a[10])
{
    int i;
    printf("elements in ascending form\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    
}