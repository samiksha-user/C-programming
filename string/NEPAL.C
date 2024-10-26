#include<stdio.h>
int main()
{
    char st[20]="NEPAL";
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",st[j]);
        }
        printf("\n");
    }
return 0;
}