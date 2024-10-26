#include <stdio.h>
int main()
{
    int i, a1[] = {1, 3, 2, 5, 4, 2, 1, 9};
    int n=sizeof(a1)/sizeof(a1[0]);

    //  printf("%d\n", n);
    // without reversing
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a1[i]);
    }
    printf("\n");

    // reversing
    for (i = 0; i < n/2; i++)
    {
        int c=a1[i];
        a1[i] =a1[n-1-i];
        a1[n-1-i]=c; 
    }

    //print after reversing
     for (i = 0; i < n; i++)
    {
        printf("%d\t", a1[i]);
    }

    return 0;
}