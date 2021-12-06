#include<stdio.h>
int main()
{
int n;
printf("Enter n numbers:\n");
scanf("%d",&n);
printf("Sum of odd numbers from 1 to %d:\n%d", n, sum_odds(n));
return 0;
}
int sum_odds(int number)
{
    int sum,i;
    for(i=0; i<= number; i++)
    {
        if((i%2)!=0)
        {
            sum+=i;
        }
    }
    return sum;
}
