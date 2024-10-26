#include<stdio.h>
void add();  //function prototype
int main()
{
   add();  //function call
   return 0; 
}
void add()  //function defination
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);

}