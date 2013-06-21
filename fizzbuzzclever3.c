#include <stdio.h>

//Does the fizzbuzz interview question in a very short way.

int main()
{
	int i = 0;
	while (i++ < 100)
		printf("%s%s%.0i\n", "fizz" + 4*((i%3) != 0), "buzz" + 4*((i%5) != 0), i*((i%3 != 0)&&(i%5 != 0)));
}