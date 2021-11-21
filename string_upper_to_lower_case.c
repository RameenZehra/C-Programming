#include <stdio.h>

void print_lower_case(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
          printf("%c",  s[i] + ('a' - 'A'));
        }
        else
        {
          printf("%c",  s[i]);
        }
        i++;
    }
    printf("\n");
}

int main()
{
    char str[] = "HELLO world How are YOU";
    print_lower_case(str);
    return 0;
}
