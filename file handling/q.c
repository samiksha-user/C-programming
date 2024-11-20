#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("fbf.txt","w");
    if(fp==NULL)
    {
        printf("cannot create file");
        exit(1);
    }
    else
    {
    printf("file created");
    }
     fputs("Its me samiksha",fp);
     fclose(fp);
     return 0; 
}