#include <stdio.h>

int main()
{
	unsigned char char_var = 0xffffffffffffffff;
    unsigned short short_var= 0xffffffffffffffff;
	unsigned int int_var = 0xffffffffffffffff;
	unsigned long long_var = 0xffffffffffffffff;
	unsigned long long longlong_var = 0xffffffffffffffff;

	unsigned char s = 0;
	unsigned char check_char = 1;
    unsigned char check_short = 1;
	unsigned char check_int = 1;
	unsigned char check_long = 1;
	unsigned char check_longlong = 1;

	for (s = 0; s < 64; s++)
	{
		char_var = char_var >> 1;
		int_var = int_var >> 1;
        long_var = long_var >> 1;
		longlong_var = longlong_var >> 1;
		short_var = short_var >> 1;
		if (char_var == 0 && check_char == 1)
		{
			printf("char_var zeroed after Right shifting %d times\n", s);
			check_char = 0;
		}
        if (short_var == 0 && check_short == 1)
		{
			printf("short_var zeroed after Right shifting %d times\n", s);
			check_short = 0;
		}

		if (int_var == 0 && check_int == 1)
		{
			printf("int_var zeroed after Right shifting %d times\n", s);
			check_int = 0;
		}
        if (long_var == 0 && check_long == 1)
		{
			printf("long_var zeroed after Right shifting %d times\n", s);
			check_long = 0;
		}

		if (longlong_var == 0 && check_longlong == 1)
		{
			printf("longlong_var zeroed after Right shifting %d times\n", s);
			check_longlong = 0;
		}
	}

	printf("size of char %d\n", sizeof(unsigned char));
    printf("size of short %d\n", sizeof(unsigned short));
	printf("size of int %d\n", sizeof(unsigned int));
	printf("size of long %d\n", sizeof(unsigned long));
	printf("size of long long %d\n", sizeof(unsigned long long));

	return 0;
}





