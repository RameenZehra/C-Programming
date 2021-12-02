#include<stdio.h>
int main()
{
    unsigned char c = 0;
    //User would input the number
    printf("Enter any character:\n");
    scanf("%c",&c);
    printf("\nThe ASCII value of %c is:%d",c, c);
    return 0;
}

