#include<stdio.h>
int search(int a[]);
int main()
{
 int i,a[5];
 printf("enter your nos:");
 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }   
 search(a);
 return 0;
}
int search(int a[])
{
    int i,flag =0,key;
    printf("enter the key element:");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        flag=1;
    }
    if(flag==1)
    printf("found");
    else
    printf("not found");
    return 0;
}