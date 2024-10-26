// sum and average of 5 number
#include <stdio.h>
int main()
{
    int n, i ;
    int sum = 0;
    float average;
    printf("how many numbers you want for calculation:");
    scanf("%d", &n);
    int a[50];
    printf("enter the numbers:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("sum =%d", sum);
    average = (float)sum/ n;
    printf("average= %f", average);
    return 0;
}
