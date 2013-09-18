#include <stdio.h>
#define FLOORS 100
#define MAXUINT ~0
#define ulli unsigned long long int

int eric(int brkheight)
{
	int tries = 0;
	int lo = 0;
	while (lo < (FLOORS - 1)) {
		tries++; //"Trying" the egg drop.
		lo += 2;
		if (lo >= brkheight) break;
	}
	tries++; //Once more for checking the floor below.
	return tries;
}

int gavin(int brkheight)
{
	int tries = 0;
	int lo = 0;
	int hi = FLOORS - 1;
	//Binary search part.
	while (1) {
		tries++; //"Trying" the egg drop.
		int mid = ((lo + hi) / 2) + 1;
		if (mid < brkheight) lo = mid;
		else {
			hi = mid;
			break;
		}
	}
	//Linear search part.
	while (lo < brkheight) {
		tries++;
		lo++;
	}
	return tries;
}

int main()
{
	int i;
	int ewins = 0; //Eric wins tally.
	int gwins = 0; //Gavin wins tally.
	int draws = 0; //Number of draws.

	ulli etotal = 0;
	ulli gtotal = 0;

	//Run the experiment.
	//It's run once for every floor height the egg could begin breaking at.
	for (i = 0; i < FLOORS; i++) {
		int etmp = eric(i);
		int gtmp = gavin(i);
		if (etmp < gtmp) ewins++;
		if (etmp > gtmp) gwins++;
		if (etmp == gtmp) draws++;
		etotal += etmp;
		gtotal += gtmp;
		if (((MAXUINT - etotal) < (ulli)etmp) || (MAXUINT - gtotal < (ulli)gtmp))
			printf("Warning, overflow!\n");
	}
	printf("Eric won %i times, Gavin won %i times, and there was a draw %i times.\n", ewins, gwins, draws);
	printf("For %i floors: Eric's average was %f, Gavin's average was %f.\n", FLOORS, etotal/(float)FLOORS, gtotal/(float)FLOORS);
	return 0;
}
