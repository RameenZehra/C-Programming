#include<stdio.h>
#include<math.h>
int main()
{
    int num;

    //User would input the number
    printf("Enter any number:\n");
    scanf("%d",&num);
    check_neon(num);
    return 0;
}
int sum=0,rem;
void check_neon(int n)
{
    int power = pow(n, 2);
    while(power)
    {
        rem=power%10;
        sum+=rem;
        power= power/10;

    }
    if (sum==n)
    {
        printf("%d is a neon number\n", n);
    }
    else
    {
        printf("%d is not a neon number\n", n);
    }
}
