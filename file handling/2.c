#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char filename[20];
    char c;
    printf("enter the filename:");
    gets(filename);
    fp=fopen(filename,"a");
    if(fp==NULL)
    {
        printf("cannot open file");
        exit(1);
    }
    printf("enter your character to append on file\n");
    while((c=getchar())!='\n')
    fputc(c,fp);
    fclose(fp);
}