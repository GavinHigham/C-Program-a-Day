#include <stdio.h>
#include <stdlib.h>

//This is the wrong way to do money.
//Try entering a number of pennies larger than 100.
//Don't do it this way.

int main(int argc, char* argv[]) {
	if (argc != 3) printf("Usage: money dollars pennies\n");
	int dollars = atoi(argv[1]);
	int pennies = atoi(argv[2]);
	printf("%2i.%2i\n", dollars, pennies);
	return 0;
}