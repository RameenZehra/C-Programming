#include <stdio.h>

/*
int binary_search(int records[], int len, int n)
{
    int i = 0;
    int f = 0;


    return f;
}
*/
// O(n)
int simple_search(int records[], int len, int n)
{
    int i = 0;
    int f = 0;
    for (i = 0 ; i < len; i++)
    {
        if (records[i] == n)
        {
            f = 1;
            break;
        }
    }
    return f;
}

int main()
{
    int passing_role_numbers[] = {4,6,7,11,13,15,19,21,34,45};
    int total_records = sizeof(passing_role_numbers) / sizeof(int);
    int my_role_number = 10;
    //int found = binary_search(passing_role_numbers, my_role_number);
    int found = simple_search(passing_role_numbers, total_records, my_role_number);
    if (found == 1)
    {
        printf("I passed\n");
    }
    else
    {
        printf("I failed\n");
    }

    found = binary_search(passing_role_numbers, total_records, my_role_number);

    return 0;
}
