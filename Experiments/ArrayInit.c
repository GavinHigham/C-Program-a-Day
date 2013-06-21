#include <stdio.h>
#define TESTSIZE 20

//Compares a couple of arrays to see if
//test2[TESTSIZE] = {0};
//PROBABLY initializes an array to zero.

int main(int argc, char **argv)
{
	int i;
	int test1[TESTSIZE];
	int test2[TESTSIZE] = {0};

	printf("Test values: \nArray 1:            Array 2:\n");
	for (i = 0; i < TESTSIZE; i++) {
		printf("%20i", test1[i]);
		printf("%20i\n", test2[i]);
	}

	return 0;
}