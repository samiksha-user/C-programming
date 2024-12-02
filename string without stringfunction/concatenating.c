#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char string1[40];
    char string2[40];
    char sum[50];
    printf("enter your 2 strings:");
    gets(string1);
    gets(string2);
    for(i=0;string1[i]!='\0';i++)
    {
        sum[i]=string1[i];
        
    }
    sum[i]=' ';
    for(j=0;string2[j]!='\0';j++)
    {
    sum[i+j+1]=string2[j];
    }
    sum[i+j+1]='\0';
    printf("string=");
    puts(sum);
    return 0;
}
