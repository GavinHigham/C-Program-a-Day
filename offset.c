#include <stdio.h>
#include <stdlib.h>

//A quick implementation of a ceasar cypher.

int main(int argc, char *argv[])
{
	if (argc < 3) {
		printf("Usage: offset [string of max length 100] [# of places]\n");
		return 0;
	}
	int offset = atoi(argv[2]);
	char* a = argv[1];
	char c;
	int i = 0;
	while ((c = a[i]) != '\0') {
		int tmp = a[i] + offset;
		tmp = (tmp - 'a')%('z' - 'a') + 'a';
		if (tmp < 'a') tmp += 'a';
		printf("%c", tmp);
		i++;
	}
	printf("\n");
}