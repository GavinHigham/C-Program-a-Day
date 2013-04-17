#include <stdio.h>

//Mucking about with incrementing pointers.

int main()
{
	char str[] = "abcdef";
	char *c = &str[0];
	printf("%c\n", *(c++));
	printf("%c\n\n", *c);
	c = &str[0];
	printf("%c\n", *(++c));
	printf("%c\n\n", *c);
	c = &str[0];
	printf("%c\n", *c++);
	printf("%c\n\n", *c);
	c = &str[0];
	printf("%c\n", *++c);
	printf("%c\n\n", *c);

	return 0;
}