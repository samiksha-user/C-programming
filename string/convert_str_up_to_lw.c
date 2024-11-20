#include<stdio.h>
int main()
{
    char st[20],i;
    printf("enter your string ");
    scanf("%s",st);
    for(i=0;i<strlen(st);i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
        st[i]=st[i]+32;
        }
        else if(st[i]>='a' && st[i]<='z')
        {
           st[i]=st[i]-32;
        }
    }
printf("\nchanged string=%s",st);
return 0;

}