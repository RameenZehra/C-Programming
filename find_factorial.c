#include<stdio.h>
int main()
{
    int num = 0;
    //User would input the number
    printf("Enter number:\n");
    scanf("%d",&num);

    long factorial=find_factorial(num);
    printf("\nThe factorial of %ld is:%d\n",num, factorial);
    return 0;
}
int find_factorial(int n)
{
    int lim = n;
    int i = 0;
    long fac = 1;
    for(i=0; i<=lim-1; i++)
    {
        fac = fac * n;
        n--;
    }
    return fac;
}
