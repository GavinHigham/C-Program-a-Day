#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

void setCar(char* doors[])
{
	struct timeval tv;                                                                 
	time_t curtime;
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);
	doors[(rand() % 3)] = (char*) "car";
	//printf("The random number for this round is %i.\n", rand());
}

void removeGoat(char* doors[], int choice)
{
	if (strcmp(doors[choice], "car") == 0) {
		doors = {"goat", "goat"};
	}

}

int main()
{
	char* doors[] = {(char*) "goat", (char*) "goat", (char*) "goat"};
	char* doors2[] = {(char*) "goat", (char*) "goat"};
	setCar(doors);
	for (int i = 0; i < 3; i++) printf("%s\n", doors[i]);
}