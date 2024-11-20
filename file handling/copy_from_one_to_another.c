#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fpp;
    char sfilename[20],dfilename[20];
    char c;
    printf("enter the  source filename:");
    gets(sfilename);
    printf("enter desrination filename:");
    gets(dfilename);
    fp=fopen(sfilename,"r");
    if(fpp==NULL)
    {
        printf("cannot open file");
        exit(1);
    }
    fpp=fopen(dfilename,"w");
    if(fpp==NULL)
    {
        printf("cannot create file");
        exit(1);
    }
    while((c=fgetc(fp))!=EOF)
    fputc(c,fpp);
    printf("copied !!\n");
    fclose(fp);
    fclose(fpp);

}