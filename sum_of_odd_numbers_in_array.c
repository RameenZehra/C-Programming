#include <stdio.h>
int main()
{
    int num[10];
    int i=0;
    int sum=0;
    printf("Enter upto 10 Values:\n");
    for (i=0; i<10; i++)
    {
        // printf("Iteration Number: %d\n", i);
        scanf("%d", &num[i]);
    }
    for (i=0; i<10; i++)
    {
        if(num[i]%2!= 0)
        {
            sum+=num[i];
        }
    }
    printf("Sum of odds numbers in array:%d\n", sum);
    return 0;
}
