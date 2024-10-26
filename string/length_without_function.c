#include<stdio.h>
int main()
{
    int l=0,i=0;
    char st[20];
    printf("enter string:");
    gets(st);
   /* while(st[i]!='\0')
    {
        l++;
        i++;

    }*/
   for(i=0;st[i]!='\0';i++)
   {
    l++;
   }
    printf("the length of string =%d",l);
    return 0;
}