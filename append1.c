#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","a");
    if(fp==NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    else
    {
    printf("file opened");
    }
    fputs("\nhello guys",fp);
    fclose(fp);
    return 0;
}