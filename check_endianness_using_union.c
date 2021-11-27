#include <stdio.h>

union xyz
{
    unsigned char x;
    unsigned short y;
    unsigned int z;
};

int main()
{
    union xyz u;
    printf("Address of this union variable is %x\n", &u);
    u.z = 1;

    if (u.x == 1)
    {
        printf("this system has stored the first byte on lower address, so it is Little Endian\n");
    }
    else
    {
        printf("this system has stored the first byte on high address, so it is Big Endian\n");

    }

    return 0;
}
