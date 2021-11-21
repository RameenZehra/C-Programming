#include <stdio.h>

int string_length(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char greetings[] = "Hello World";
    printf("%s\n", greetings);
    printf("length of string: %d", string_length(greetings));
    return 0;
}