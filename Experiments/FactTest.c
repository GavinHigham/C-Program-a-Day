#include <stdio.h>
#include <math.h>

//This is a really dumb hard-coded factorial experiment.

int main()
{
	int n = 1;
	unsigned long long int result = 1;
	unsigned long long int upper = pow(10, 6);
	while(result <= upper) {
		printf("%llu\n%i\n", result, n);
		result *= n++;
	}
	return 0;
}