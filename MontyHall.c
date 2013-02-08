#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

void door_init(char* doors[])
{
	struct timeval tv;                                                                 
	//time_t curtime;
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);
	doors[0] = doors[1] = doors[2] = (char*)"goat";
	doors[(rand() % 3)] = (char*) "car";
	//printf("The random number for this round is %i.\n", rand());
}

int main()
{
	int i;
	char* doors[3];
	door_init(doors);
	for (i = 0; i < 3; i++) printf("%s\n", doors[i]);
	return 0;
}