#include <stdio.h>
#include <string.h>

long long foo()
{
    int i = 0;
    scanf("%d", &i);
    int * records = malloc(sizeof(int) * i);
    records[0] = 17;
    *records = 17;
    *(records + 0) = 17;
    printf("records address %x\n",  &records[0]);
    return records;
}
int main()
{
    int *ptr = foo();
    *ptr = 10;
    printf("main function changed the value of 0 index to %d\n", *ptr);
    free(ptr);
    return 0;
}
