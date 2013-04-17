#include <stdio.h>

//Checking if C lets you declare an int in the for loop initialization.
//It doesn't.

int main()
{
	for (int i = 0; i < 10; i++) printf("%i\n", i );
	return 0;
}