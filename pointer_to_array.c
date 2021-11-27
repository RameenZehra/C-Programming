#include <stdio.h>
#include <string.h>
void print_array(int * ptr, int len)
{
    int i = 0;
    for(i=0; i < len; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}
int main()
{
    int i = 0;
    int roll_number[] = {2, 3, 4, 5, 6, 8, 9, 10, 13, 7};
    int len = (sizeof(roll_number))/sizeof(int);
    int * ptr;
    ptr = &roll_number[0];
    printf("ptr contains %x\n", ptr);
    printf("Address of roll_number name %x\n", roll_number);
    printf("Address of roll_number array %x\n", &roll_number);
    print_array(roll_number, len);
    return 0;
}
