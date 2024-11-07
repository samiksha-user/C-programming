#include<stdio.h>
int palin(int);
int main()
{
    int n;
    printf("enter your no:");
    scanf("%d",&n);
   int p=palin(n);
   if(p==n)
   printf("palindrome");
   else
   printf("not palindrome");
   return 0;
}
int palin(int x)
{
    int rev=0,rem;
    while(x>0)
    {
    rem=x%10;
    rev=rev*10+rem;
    x=x/10;
    
    }
    return rev;
}