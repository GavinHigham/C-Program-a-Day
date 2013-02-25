#include <stdio.h>

#define INT_MIN ((int) 0x80000000)
#define INT_MAX 0x7FFFFFFF

int main()
{
int x = INT_MIN;
float f = 1.1;
double d = 1.2;
printf("%i\n", (d == (double) (int) d));
//if d = 1.1 (or any number with a fractional part)
//0
printf("%i\n", (f == (float) (int) f));
//if f = 1.1 
//0
printf("%i\n", (f == (float) -(double) -f));
//Not lossy conversion, sign bit is reserved.
printf("%i\n", (x == -(-x)));
//Flip bits and add 1. Not lossy

printf("((x != -x) || (x == 0)) %i\n", ((x != -x) || (x == 0)));

printf("%i\n", (1.0/2 == 1/2));

printf("%i\n", (f * f >= 0));

printf("%i\n", ((d + f) - d == (double)f));

}