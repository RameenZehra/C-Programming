#include <stdio.h>
#include "library.h"

int max;                /* maximum length seen so far */

char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* longest line saved here */

/* print longest input line; specialized version */
int main()
{
    int len;
    max = 0;
    while ((len = getline()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0)  /* there was a line */
        printf("%s", longest);
    return 0;
}
