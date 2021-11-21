#include <stdio.h>

void str_concatenate(char to[], char s1[], char s2[])
{
    int i = 0;
    int j = 0;
    while (s1[i] != '\0')
    {
        to[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        to[j] = s2[i];
        i++;
        j++;
    }
    to[j] = '\0';
}

int main()
{
    char str[] = "HELLO world How are YOU";
    char str2[] = "I am fine";
    char str3[100];

    str_concatenate(str3, str, str2);
    printf("%s\n", str3);
    return 0;
}
