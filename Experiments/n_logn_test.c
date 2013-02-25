#include <stdio.h>
#include <math.h>

int main() {
	unsigned long long int n = 1;
	unsigned long long int upper = 356 * 24 * 3600 * pow(10, 6);

	while(n * log(n) <= upper) {
		printf("%llu\n", n);
		n += 1000000;
	}
		n -= 1000000;

	while(n * log(n) <= upper) {
		printf("%llu\n", n);
		n += 1000000;
	}
	n -= 1000000;

	while(n * log(n) <= upper) {
		printf("%llu\n", n);
		n++;
	}
	return 0;
}