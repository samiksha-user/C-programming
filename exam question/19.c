#include<stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[40];
        char address[40];
        float marks;
    }s[40];
    int i;
    printf("enter the detail of students\n");
    for(i=0;i<2;i++)
    {
        printf("enter the detail of student%d",i+1);
        printf("\nroll no:");
        scanf("%d",&s[i].roll);
        printf("\nname:");
        scanf("%s",s[i].name);
        printf("\naddress:");
        scanf("%s",s[i].address);
        printf("\nmarks:");
        scanf("%f",&s[i].marks);
    }
    printf("detail of students having marks more than 250 are\n");
    for(i=0;i<2;i++)
    {
    if(s[i].marks>=250)
    {
        printf("roll=%d\nname=%s\naddress=%s\nmarks=%f",s[i].roll,s[i].name,s[i].address,s[i].marks);
    }
    }
    return 0;
}