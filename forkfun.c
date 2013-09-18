#include <stdio.h>
#include <stdlib.h>

//Experimenting with forking.

int main()
{
	fork();
	fork();
	fork();
	fork();
	printf("Forking is cool.\n");
	return 0;
}