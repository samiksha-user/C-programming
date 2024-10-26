#include<stdio.h>
#include<string.h>
int main()
{
    char st[20];
    printf("enter your string:");
    gets(st);
    printf("string in lower case=%s",strlwr(st));
    return 0;
}