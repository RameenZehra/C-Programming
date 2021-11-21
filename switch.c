#include <stdio.h>


int main()
{
    char c = '9';

    /*
    if ( c == '0')
    {
        printf(" this is 0 \n");
    }
    if ( c == '1')
    {
        printf(" this is 1 \n");
    }
    if ( c == '2')
    {
        printf(" this is 2 \n");
    }
    //....
    if ( c == '9')
    {
        printf(" this is 9 \n");
    }
    */
    // switch is similar to above if conditions
    switch(c)
    {
        case '0':
            printf(" this is 0 \n");
        case '1':
            printf(" this is 1 \n");
        case '2':
            printf(" this is 2 \n");
        //...
        case '9':
            printf(" this is 9 \n");
    }
    return 0;
}
