#include<stdio.h>
int min(int a[]);
int main()
{
   int i,a[5];
   printf("enter your numbers:");
   for(i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   }
   min(a);
   return 0;
}
  int min(int a[5])
  {
    int i,min=0;
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("minmum value=%d",min);
    return 0;
  }