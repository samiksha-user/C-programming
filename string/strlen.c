#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char str[30];
    printf("enter your name");
    //scanf("%s",str);
    gets(str);
    l=strlen(str);
    printf("length of str =%d",l);
    return 0;
}