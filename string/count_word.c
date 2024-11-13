#include<stdio.h>
#include<string.h>
int main()
{
    char st[20];
    int i;
    int count=0;
    printf("enter the string:");
    gets(st);
    for(i=0;i<strlen(st);i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        count++;
    }
    printf("total no of even letters=%d",count);
    return 0;
}