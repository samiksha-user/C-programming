#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter your name:");
    gets(name);
    printf("%s",strrev(name));
    return 0;
}