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
	char *a = argv[1];
	char b[101];
	char c;
	int i = 0;
	while ((c = a[i]) != '\0') {
		int tmp = a[i] + offset;
		//If it's a lowercase letter, make it uppercase.
		if ('a' <= tmp && tmp <= 'z')
			tmp ^= ' ';
		//Map letters onto the integers 0-25.
		if ('A' <= tmp && tmp <= 'Z')
			tmp -= 'A';
		//Map digits onto the integers 26-36.
		//Zeros get moved to 36.
		if ('0' <= tmp && tmp <= '9') {
			if (tmp == '0')
				tmp = 36;
			else
				tmp = tmp - '1' + 26;
		}
		b[i] = tmp;
	}
	b[i+1] = '\0';
	for (i = 0; i < 36; i++) {
		int j;
		for (j = 0; b[j] != '\0'; j++) {
			b[j] = (b[j] + 1) % 36;
			if (0 <= b[j] && b[j] <= 25)
				printf("%c", b[j]+'A');
			if (26 <= b[j] && b[j] <= 36)
				if (b[j] == 36)
					printf("0");
				else
					printf("%c", b[j]+'1');
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}