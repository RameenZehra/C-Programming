#include <stdio.h>
int print_counter()
{
    static int counter = 0;
    counter++;
    return counter;
}
int print_count()
{
    int count = 0;
    count++;
    return count;
}
int main()
{
    printf("Count: %d\n", print_count());
    printf("Count: %d\n", print_count());
    printf("Counter: %d\n", print_counter());
    printf("Counter: %d\n", print_counter());
    return 0;
}
