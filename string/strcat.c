#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30],s3[40];
    printf("enter first string:");
    gets(s1);
    printf("enter second string:");
    gets(s2);
    printf("s3=%s",strcat(s1,s2));
    return 0;

}