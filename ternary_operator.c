#include <stdio.h>


int main()
{
    int i = (1 > 0) ? 10 : 20;
    /* Alternative :
    int i;
    if (1 > 0)
    {
        i = 10;
    }
    else
    {
        i = 20;
    }*/
    printf("This number is %d\n", i);

    return 0;
}
