#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char c;
    char filename[20];
    printf("enter the filename:");
    gets(filename);
    fp=fopen(filename,"w");
    if(fp==NULL)
    {
        printf("cannot create file");
        exit(1);
    }
    printf("enter your character\n");
    while((c=getchar())!='\n')
    fputc(c,fp);
    fclose(fp);

}