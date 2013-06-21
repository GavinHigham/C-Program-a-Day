#include <stdio.h>

//Tests if the quotient produced by dividing a negative integer
//rounds up or down.

int main()
{
	int negint = -3;
	printf("negint = %i, negint/2 = %i, negint + 0.999 = %i, negint + 1.5 = %i\n", negint, (int)(negint/2.0), (int)(negint + 0.999), (int)(negint + 1.5));
	return 0;
}