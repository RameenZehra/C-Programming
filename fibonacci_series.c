#include<stdio.h>
int main()
{
    int n;
    printf("Enter n numbers:\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
int fibonacci(int number)
{
    printf("Fibonacci Series upto %d:\n", number);
    int current = 0;
    int next = 1;
    int sum;
    int i;
    for(i=0; i<= number; i++)
    {
        printf("%d\n", current);
        sum = current+next;
        current = next;
        next = sum;
    }
    return sum;
}
