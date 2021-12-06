#include<stdio.h>
int main()
{
int n;
printf("Enter n numbers to sum:\n");
scanf("%d",&n);
printf("Sum of squares of %d numbers:\n%d", n, sum_squares(n));
return 0;
}
int sum_squares(int number)
{
    int sum,i,square;
    for(i=0; i<= number; i++)
    {
        square= i*i;
        sum+=square;
    }
    return sum;
}
