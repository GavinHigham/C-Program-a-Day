#include <stdio.h>
#include <stdlib.h>

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
		if (tmp > 126) tmp %= 94;
		if (tmp < 33) tmp = 128 + (tmp) % 94;
		printf("%c", tmp);
		i++;
	}
	printf("\n");
}