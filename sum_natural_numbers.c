#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum of %d natural numbers:\n%d", n, sum_numbers(n));
    return 0;
}
int sum_numbers(int n)
{
    int i = 0;
    int sum = 0;
    for(i=0; i<n; i++)
    {
        sum+=i;
    }
    return sum;
}
