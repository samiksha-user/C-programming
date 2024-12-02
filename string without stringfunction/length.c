#include<stdio.h>
int main()
{
    int i,length=0;
    char name[20];
    printf("enter your name:");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
     length++;
    }
    printf("length of string=%d",length);
    return 0;
}