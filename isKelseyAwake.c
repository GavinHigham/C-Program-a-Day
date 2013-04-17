#include <stdio.h>
#include <string.h>

//Tells you if my brother, Kelsey, is awake.

int main() {
	char internet[20]; 
	printf("Is the internet working?\n");
	scanf("%s", internet);
	if (strcmp(internet, "yes") == 0
	 || strcmp(internet, "Yes") == 0
	 || strcmp(internet, "YES") == 0
	 || strcmp(internet, "yeah") == 0
	 || strcmp(internet, "Yeah") == 0
	 || strcmp(internet, "YEAH") == 0)
		printf("Kelsey is awake.\n");
	else printf("Kelsey is asleep.\n");
	return 0;
}