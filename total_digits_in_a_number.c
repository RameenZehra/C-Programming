#include<stdio.h>
int main()
{
long n;
printf("Enter a number:\n");
scanf("%d",&n);
printf("Digits in the number:\n%d", check_digits(n));
return 0;
}
int check_digits( int number)
{
    int digits;
    while(number!=0)
    {
        digits++;
        number = (number/10);
    }
    return digits;
}
