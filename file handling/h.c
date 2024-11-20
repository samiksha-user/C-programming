#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char name[20],address[20];
    int salary;
    int id;
    fp=fopen("employee.txt","w");
    if(fp==NULL)
    {
        printf("cannot create file");
        exit(1);
    }
    printf("enter  the employee name:");
    gets(name);
    printf("enter the employee id:");
    scanf("%d",&id);
    printf("enter address:");
    gets(address);
    printf("enter salary:");
    scanf("%d",&salary);
    fprintf(fp, "name=%s id=%d address=%s salary=%d",name,id,address,salary );
    fclose(fp);
}