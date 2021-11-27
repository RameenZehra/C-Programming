#include <stdio.h>

int main()
{
    int i = 0;
    while(1)
    {
      scanf("%d", &i);
    if(( i%5 == 0) &&  (i%10== 0))
    {
        printf("FooBuzz\n");
    }
    else if( i%5 == 0)
    {
        printf("Foo\n");
    }
    }
    return 0;
}
