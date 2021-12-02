#include<stdio.h>
int main()
{
    int num1,num2,num3 = 0;
    int greatest = 0;
    printf("Enter number1:\n");
    scanf("%d",&num1);
    printf("Enter number2:\n");
    scanf("%d",&num2);
    printf("Enter number3:\n");
    scanf("%d",&num3);

    greatest=find_greatest(num1,num2,num3);
    printf("\nThe greatest number is:%d\n",greatest);
    return 0;
}
int find_greatest(int n1, int n2, int n3)
{
    int greater = 0;
    if(n1>n2)
    {
        greater = n1;
    }
    else
    {
        greater = n2;
    }
    if(greater>n3)
    {
        return greater;
    }
    else
    {
        greater = n3;
    }
    return greater;
}
