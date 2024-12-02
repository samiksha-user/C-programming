#include<stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[40];
        float marks;
    }s;
    printf("enter the detail of student\n");
    printf("roll=");
    scanf("%d",&s.roll);
    printf("enter name:");
    scanf("%s",s.name);
    printf("marks=");
    scanf("%f",&s.marks);
    return 0;
}