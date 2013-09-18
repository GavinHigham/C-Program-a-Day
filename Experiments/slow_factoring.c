#include <stdio.h>
#include <stdlib.h>

//Finds the factors of numbers, kinda.

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Usage: obfuscate number\n");
		return 0;
	}
	int num = atoi(argv[1]);
	int i;
	for (i = num; i > 0; i--)
		if (num % i == 0) printf("%i / %i = %i\n", num, i, num/i);
	return 0;
}