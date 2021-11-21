#include <stdio.h>


int main()
{
    char str[] = "Hello";
    //olleH
    int start = 0;
    int end = strlen(str) - 1;

   printf("string before reversing: %s\n", str);

    while(start != end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("string after reversing: %s\n", str);

    return 0;
}
