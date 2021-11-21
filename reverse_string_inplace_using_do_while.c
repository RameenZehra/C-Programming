#include <stdio.h>


int main()
{
    char str[] = "Hello";
    //olleH
    int start = 0;
    int end = strlen(str) - 1;

   printf("string before reversing: %s\n", str);

    do
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    } while(start != end);

    printf("string after reversing: %s\n", str);

    return 0;
}
