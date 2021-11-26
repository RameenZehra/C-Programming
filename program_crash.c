#include <stdio.h>
#include <string.h>

int main()
{
//    int i = 0;
//    int j = 11;
//    printf("%d\n", j/i);
    int records[] = {0,1,2,3};
    records[1000] = 5;
    printf("%d\n", records[1000]);
    return 0;
}
