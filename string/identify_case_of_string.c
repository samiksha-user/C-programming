#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,upflag=0;
    int lowflag=0;
    printf("enter the string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
        upflag=1;
        break;
        }

        else if (str[i]>='a' && str[i]<='z')
        {
        lowflag=1;
        }
    }
    if(upflag==1)
    {
        printf("uppercase");
    }
    else if(lowflag==1)
    {
        printf("lowercase");
    }       
    return 0;
}