#include <stdio.h>

//Does the fizzbuzz interview question.

int main()
{
	int i;
	for (i = 1; i <= 100; i++) {
		if (!(i%3)&&!(i%5)) printf("fizzbuzz\n");
		else if (!(i%3)) printf("fizz\n");
		else if (!(i%5)) printf("buzz\n");
		else printf("%i\n", i);
	}
	return 0;
}