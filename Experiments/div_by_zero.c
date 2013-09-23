#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("Usage div_by_zero [some integer]\n");
	else printf("%i\n", atoi(argv[1]) / 0);
	return 0;
}