#include <stdio.h>
#include <math.h>


int recurse(int n)
{
	if (n == 1)
		return 1;
	else
		return recurse((n-1)/2) + n;
}

int main() {
	int p = 15;
	int n = (int) pow(2, p) - 1;
	printf("recurse(%d) = %d\n", n, recurse(n));
	return 0;
}