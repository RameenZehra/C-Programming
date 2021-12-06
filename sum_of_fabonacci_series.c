#include<stdio.h>
int main()
{
    int n;
    printf("Enter n numbers:\n");
    scanf("%d",&n);
    printf("Sum of Fibonacci Series upto %d:\n%d",n,fibonacci(n));
    return 0;
}
int fibonacci(int number)
{
    int current = 0;
    int middle = 1;
    int sum = 0;
    int i, next;
    for(i=0; i<= number; i++)
    {
        next = current+ middle;
        sum+= current;
        current = middle;
        middle = next;
    }
    return sum;
}
