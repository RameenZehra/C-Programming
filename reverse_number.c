#include<stdio.h>
int main()
{
    int num,reverse_number;

    //User would input the number
    printf("Enter any number:\n");
    scanf("%d",&num);

    //Calling user defined function to perform reverse
    reverse_number=reverse_function(num);
    printf("\nAfter reverse the number is:%d\n",reverse_number);
    return 0;
}
int sum=0,rem;
int reverse_function(int num)
{
    if(num)
    {
        rem=num%10;
        sum=sum*10+rem;
        reverse_function(num/10);
    }
    else
    {
        return sum;
    }
    return sum;
}
