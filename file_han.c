#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w");
    if (fp == NULL)
    {
        printf("\n cannot create file");
        exit(0);
    }
    else
    {
        printf("file created");
    }
    fputs("im studying",fp);
    fclose(fp);
    return 0;
     }