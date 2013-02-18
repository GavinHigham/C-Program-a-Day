#include <stdio.h>

//Testing possible usages of the bit-flip operator for inverting integers.

int main()
{
	int x = 100;

	//These work.
	printf("%i\n", x);
	x = ~x + 1;
	printf("%i\n", x);
	x = ~x++;
	printf("%i\n", x);
	x = ~--x;
	printf("%i\n", x);

	//These don't invert stuff properly.
	x = ~x--;
	printf("%i\n", x);
	x = ~++x;
	printf("%i\n", x);

	//These don't even compile.
	/*
	x ~= x+1;
	printf("%i\n", x);
	x ~= x++;
	printf("%i\n", x);
	return 0;
	*/
}