#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    struct vehicle_owner
    {
        char name[20];
        char address[20];
        int phone_no;
        int vehicle_no;
        int lisence_no;


