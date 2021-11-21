
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 1000

int getline(char current_line[])
{
    int index = 0;
    int c;
    while((c = getchar()) != EOF)
    {
        current_line[index] = c;
        index++;
        if (c == '\n')
        {
            current_line[index] = '\0';
            break;
        }
    }
    return index;
}

void copy(char to[], char from[], int len)
{
    int i = 0;
    for ( i = 0; i < len; i++)
    {
        to[i] = from[i];
    }
}

void pass_by_reference(char temp_array[])
{
    temp_array[0] = 'A';
}

void pass_by_value(int v)
{
    v = 10;
}

int main()
{
   char longest[MAX_LEN];
   char line[MAX_LEN];
   int len;
   int max = 0;
   int i = 0;

/*
   line [0] = 'B';
   pass_by_reference(line);
   printf("first character of array named line is %c\n", line[0]);

   pass_by_value(max);
   printf("max contains value: %d\n", max);
*/

   while(1)
   {
         len  = getline(line);
         if (len == 0)
         {
             break;
         }
         if (len > max)
         {
             max = len;
             copy(longest, line, len);
         }
   }

   printf(" got max length %d\n", max);
   for (i = 0; i < max; i++)
   {
           printf("%c", longest[i]);
   }

    return EXIT_SUCCESS;
}
