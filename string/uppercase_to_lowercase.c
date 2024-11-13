#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    printf("enter your character:");
    scanf("%c",&c);
    printf("original character=%c",c);
    int ch;
    ch=c-32;
    printf("\nchanged character=%c",ch);
    return 0;
}