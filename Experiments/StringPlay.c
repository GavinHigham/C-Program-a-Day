#include <stdio.h>

int main()
{
	char *str;
	char ca[4] = {'a', 'b', 'c', '\0'};
	str = ca;
	//str = "abc";

	printf("%s\n", ca);
	ca[1] = 'x';
	printf("%s\n", ca);
	printf("%s\n", str);
	str[1] = 'x';
	printf("%s\n", str);
	return 0;
}