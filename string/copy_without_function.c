#include<stdio.h>
int main()
{
    int i;
    char st1[20],st2[20];
    printf("enter string:");
    gets(st1);
    for(i=0;st1[i]!='\0';i++)
    {
     st2[i]=st1[i];
    }
    printf("the copied string =%s",st2);
    return 0;
}