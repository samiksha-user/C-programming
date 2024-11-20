#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fpp;
    char sfilename[20],dfilename[20];
    char c;
    printf("enter the source filename:");
    gets(sfilename);
    fp=fopen(sfilename,"r");
    if(fp==NULL)
    {
        printf("cannot open file");
        exit(1);
    }
    printf("enter the destination filename");
    gets(dfilename);
    fpp=fopen(dfilename,"w");
    if(fpp==NULL)
    {
        printf("cannot create file");
    exit(1);
    }
    while((c=fgetc(fp))!=EOF)
    {
        if((c!='a') &&(c!='e')&&(c!='i')&&(c!='o')&&(c!='u'))
         fputc(c,fpp);
    }
    fclose(fp);
    fclose(fpp);
}