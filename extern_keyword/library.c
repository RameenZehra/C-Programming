#include <stdio.h>
#include <stdlib.h>
#include "library.h"
extern char line[];
extern char longest[];

int getline(void)
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: specialized version */
void copy(void)
{
    int i;

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
