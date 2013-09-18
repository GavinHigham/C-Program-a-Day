#include <stdio.h>

//Takes numbers and tells you what grade they would receive.
//Greater than 89 is an A, less than 60 is an F, -1 breaks the scan loop. 

int main()
{
	int x;
	while (printf("Please enter a grade:\n") && scanf("%d", &x) && x != -1) {
		printf("%c\n", x<100?x>59?'J'-(x/10):'F':'A');
	}
	return 0;
}