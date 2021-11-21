
#include <stdio.h>

long long power(int m, int n)
{
    int i = 0;
    long long r = 1;
    for (i = 0; i < n; i++)
    {
        r = r * m;
    }

    return r;
}

main()
{
    int t = 0;
    int c;
    int pwr;
    long long result;
    int number = 0;
    int new_line_detected = 0;
    printf("Give a number:");
    while ((c = getchar())!= EOF)
    {
        if (c != '\n')
        {
            t = (t * 10) + (c - '0');
        }
        else
        {
            if (new_line_detected == 0)
            {
                printf("What is the power:");
                new_line_detected = 1;
            }
            if (number == 0)
            {
                number = t;
            }
            else
            {
                pwr = t;
            }
            t = 0;
        }
    }

    printf("%lld", power(number, pwr));
}
