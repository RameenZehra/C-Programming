#include<stdio.h>
int main()
{
    int num,armstrong_number;

    //User would input the number
    printf("Enter any number:\n");
    scanf("%d",&num);

    armstrong_function(num);
    return 0;
}

void armstrong_function(int n)
{
    int d = n;
    int sum = 0;
    int rem = 0;
    while(n!=0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(sum==d)
    {
        printf("%d is an armstrong number\n", d);
    }
    else
    {
        printf("%d is not an armstrong number\n", d);
    }
}
