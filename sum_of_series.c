#include<stdio.h>
int main()
{
    int n;
    printf("Enter n numbers:\n");
    scanf("%d",&n);
    int i;
    float sum = 0.0;
    for(i=1; i<= n; i++)
    {
        sum+=( 1.0/i);
    }
    printf("Sum of series from 1 to %d:\n%f", n, sum);
    return 0;
}
