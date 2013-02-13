#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 3) {
		printf("Usage: money dollars pennies\n");
		return 0;
	}
	int dollars = atoi(argv[1]);
	int pennies = atoi(argv[2]);
	dollars += pennies / 100;
	pennies %= 100;
	printf("%2i.%02i\n", dollars, pennies);
	return 0;
}