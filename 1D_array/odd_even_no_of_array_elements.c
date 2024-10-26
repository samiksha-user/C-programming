#include <stdio.h>
int main()
{
    int n, i, a[50], esum = 0, osum = 0,ocount=0,ecount=0;
    printf("enter how many terms:");
    scanf("%d", &n);
    printf("enter array element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ecount++;
            esum = esum + a[i];
        }
        else
        {
            ocount++;
            osum = osum + a[i];
        }
    }
        printf("even elements=%d\nodd elements=%d", ecount, ocount);
        printf("sum of even elements=%d\n sum of odd elements=%d", esum, osum);


        return 0;
    }