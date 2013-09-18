#include <stdio.h>

//Experimenting with negative values and the modulus operator.

int main()
{
	int a = -100;
	int b = 10;
	printf("%4i mod %3i = %3i\n", a, b, (a%b));
	a = -101;
	b = 10;
	printf("%4i mod %3i = %3i\n", a, b, (a%b));
	a = 101;
	b = -10;
	printf("%4i mod %3i = %3i\n", a, b, (a%b));
	return 0;
}