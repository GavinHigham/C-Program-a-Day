#include <stdio.h>

//I don't really remember what this is.
//Probably just playing with sizeof()

int main()
{
	//int x = 1;
	/*
	for(;;) {
		x = 2;
		printf("%i\n", x);
		continue;
	}
	*/

	int i = 5;
	int *i_p = &i;
	int i_a[] = {11, 33, 44}; 
	printf("%lu\n%lu\n%lu\n", sizeof(i), sizeof(i_p), sizeof(i_a));
}