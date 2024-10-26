#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[5][100];
    printf("enter the name of student:\n");
    for(i=0;i<5;i++)
    {
        gets(name[i]);
    }
    printf("name of students are:\n");
    for(i=0;i<5;i++)
    {
        puts(name[i]);
    }
    return 0;
}