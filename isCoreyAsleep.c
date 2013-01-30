#include <stdio.h>
#include <string.h>

//Tells you if my brother, Corey, is asleep. He is.

int main() {
	char home[20], day[20], timeOfDay[20]; 
	printf("Is Corey at home?\n");
	scanf("%s", home);
	printf("What day is it?\n");
	scanf("%s", day);
	printf("What time is it?\n");
	scanf("%s", timeOfDay);
	printf("Corey is asleep.\n");
	return 0;
}