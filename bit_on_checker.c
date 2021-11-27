#include <stdio.h>

int check_bit(int num, int bit)
{
    int status = 0;
    if ((num & (1 << bit))!= 0)
    {
        status = 1;
    }
    return status;
}
int main()
{
    int number = 0xf3;
    int bit_to_check = 4;
    printf("Bit %d is %d", bit_to_check,check_bit(number,bit_to_check));

    return 0;
}
