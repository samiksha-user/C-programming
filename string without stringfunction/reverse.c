#include<stdio.h>
#include<string.h>
int main()
{
    int i,length;
    char string[30];
    char rev[30];
    printf("enter your string:");
    gets(string);
    length=strlen(string);
    for(i=length-1;length!=0;i--)
    {
     rev[i]=string[i];
    }
    printf("revered string=%s"); 
    gets(rev);
    return 0;
}