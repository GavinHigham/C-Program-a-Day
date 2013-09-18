#include <stdio.h>

int main()
{
	int x;
	while (printf("Please enter a grade:\n") && scanf("%d", &x) && x != -1) {
		printf("%c\n", x<100?x>59?'J'-(x/10):'F':'A');
	}
	return 0;
}