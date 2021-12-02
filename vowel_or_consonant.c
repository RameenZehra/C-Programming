#include<stdio.h>
int main()
{
    unsigned char alpha;

    //User would input the number
    printf("Enter any alphabet:\n");
    scanf("%c",&alpha);
    check_alphabet(alpha);
    return 0;
}

void check_alphabet(char x)
{
    if((x>= 'a' && x<= 'z') || (x>= 'A' && x<= 'Z'))
    {
        if((x==97)|| (x==101) || (x==105) || (x==111) || (x==117) || (x==65)|| (x==69) || (x==73) || (x==79) || (x==85))
        {
            printf("This is a vowel\n");

        }
        else
        {
            printf("This is a consonant\n");
        }
    }
    else
    {
        printf("Please enter an alphabet\n");
    }
}
