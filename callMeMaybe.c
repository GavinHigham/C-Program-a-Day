#include <stdio.h>

int callCount = 0;

void callMeMaybe()
{
	printf("%i\n", callCount);
	callCount++;
	callMeMaybe();
}

int main() {
	callMeMaybe();
	return 0;
}