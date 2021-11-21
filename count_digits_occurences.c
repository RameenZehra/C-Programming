#include <stdio.h>

main()
{
    int i;
    int c;
    int digits_count[10] = {0};
    while ((c = getchar())!= EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++digits_count[c - '0'];
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%c occurred %d times\n", (i + '0'), digits_count[i]);
    }
}
