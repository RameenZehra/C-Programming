#include<stdio.h>
int main()
{
    int num;

    //User would input the number
    printf("Enter any number:\n");
    scanf("%d",&num);

    //Calling user defined function to perform reverse
    palindrome(num);
    return 0;
}
int sum=0,rem;
int palindrome(int n)
{
    int check = n;
    while(check)
    {
        rem=check%10;
        sum=sum*10+rem;
        check = (check/10);
    }
        if(sum==n)
        {
            printf("%d is a palindrome\n", n);
        }
        else
        {
            printf("%d is not a palindrome\n", n);
        }
    return 0;
}
