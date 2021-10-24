#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>

   /* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
     float fahr, celsius;
     float lower, upper, step;

     lower = 0;      /* lower limit of temperature scale */
     upper = 300;    /* upper limit */
     step = 20;      /* step size */

     fahr = lower;
     printf("This is Fahrenheit to Celsius Conversion\n");
     while (fahr <= upper) {
         celsius = (5.0/9.0)* (fahr-32) ;
         printf("%3.1f\t%6.1f\n", fahr, celsius);
         fahr = fahr + step;
     }
}
