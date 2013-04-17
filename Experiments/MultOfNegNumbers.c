#include <stdio.h>

//Playing around with overflow.

int main() {
	int x = -1;

	while ((x < 0 && ((x*2) < 0))) {
		printf("%i\n", x);
		x *= 2;
	}

	x /= 2;

	while ((x < 0 && ((x*2) < 0))) {
		printf("%i\n", x);
		x -= 1;
	}

	return 0;
}