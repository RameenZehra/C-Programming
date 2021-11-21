#include <stdio.h>

int count_on_bits(unsigned int n)
{
    int i = 0;
    int on_bits = 0;
    for ( i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            on_bits++;
        }
    }
    return on_bits;
}

int main()
{
    unsigned int number = 0xffffffff;
    printf("This number %u has total %d bits ON", number, count_on_bits(number));

    return 0;
}
