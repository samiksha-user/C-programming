#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("fbf.txt","a");
    if(fp==NULL)
    {
        printf("cannot open file");
        exit(1);
    }
    fputs("hello",fp);
    fclose(fp);
    return 0;
}