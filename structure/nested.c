#include<stdio.h>
int main()
{
    struct dob
    {
        int year;
        int month;
        int day;
    };
    struct student
    {
        int roll;
        char name[40];
        char address[40];
        struct dob d;
    }s;
    printf("enter rollno:");
    scanf("%d",&s.roll);
    printf("enter name:");
    scanf("%s",s.name);
    printf("enter address:");
    scanf("%s",s.address);
    printf("enter year of birth:");
    scanf("%d",&s.d.year);
    printf("enter month of birth:");
    scanf("%d",&s.d.month);
    printf("enter year of day:");
    scanf("%d",&s.d.day);

    printf("record of a student is \n");
    printf("\nroll=%d",s.roll);
    printf("\nname=%s",s.name);
    printf("\nadddress=%s",s.address);
    printf("\ndate of birth=%d-%d-%d",s.d.year,s.d.month,s.d.day);
    return 0;
}