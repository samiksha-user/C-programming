#include<stdio.h>
#include<string.h>
int main()
{
    int d;
char s1[30],s2[30];
printf("enter first string:");
gets(s1);
printf("enter second string:");
gets(s2);
printf("ASCII value of s1=%d",s1);
d=strcmp(s1,s2);
if(d==0)
printf("strings are identical");
else if(d<0)
printf("string is non identical and s1 is less than s2");
else
printf("non identical and s1 is greater than s2");
return 0;
}