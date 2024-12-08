#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the value of a b and c:");
    scanf("%d%d%d",&a,&b,&c);
    float d=b*b-4*a*c;
    float root1,root2;
    if(d>0)
    {
        
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots are real\n");
        printf("roots are %f\t%f",root1,root2);
    }
    else
    {
      root1=-b/(2*a);
      root2=sqrt(abs(d))/(2*a);
      printf("roots are imaginary\n");
      printf("roots are %.0f+i%.0f\n%.0f-i%.0f",root1,root2,root1,root2);  
    }
    return 0;
}