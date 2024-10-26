#include<stdio.h>
#include<string.h>
int main()
{
char a1[20],a2[20];
printf("enter your name(a1)=");
gets(a1);
printf("\na2=%s",strcpy(a2,a1));
//or
strcpy(a2,a1);
printf("a2=%s",a2);

return 0;

}