#include<stdio.h>
int main()
    {
        int i;
        char st1[20],st2[20],st3[20];
        printf("enter first string:");
        gets(st1);

        printf("enter second string:");
        gets(st2);

        for(i=0;st1[i]!='\0' && st2[i]!='\0';i++)
        {
           st3[i]=st1[i]+st2[i];
        }
        printf("%s",st3);
        return 0;

    }
