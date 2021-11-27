#include <stdio.h>

/* Alternative
#define JANUARY 1
#define FEBRUARY 2
...
*/

int main()
{
    // associating constant values with names of months for convenience
    enum month
    {
        JANUARY=1,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    enum month current_month = DECEMBER;

    if (current_month == JANUARY)
    {
        printf("Year has just started\n");
    }

    if (current_month == DECEMBER)
    {
        printf("Its a christmas month\n");
    }
    return 0;
}
