#include <stdio.h>

union xyz
{
    unsigned char x;
    unsigned short y;
    unsigned int z;
};


struct abc
{
    unsigned char a;
    unsigned short b;
    unsigned int c;
};

int main()
{
    union xyz u;
    struct abc s;
    printf("Address of this union variable is %x\n", &u);
    u.x = 0;
    u.y = 0;
    u.z = 0xdeadbeef;

    s.a = 0;
    s.b = 0;
    s.c = 0xdeadbeef;

    printf("u.x:%x\n u.y:%x\n u.z:%x\n", u.x, u.y, u.z);
    printf("s.a:%x\n s.b:%x\n s.c:%x\n", s.a, s.b, s.c);

    return 0;
}
