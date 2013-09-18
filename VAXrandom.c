#include <stdio.h>
#define TRIES 100000000
#define COLUMNS 80

unsigned int randSeed;

unsigned int rand(void)
{
	randSeed = (69069 * randSeed + 1);
	return randSeed;
}

int main()
{
	int i;
	int seed;
	int columncnt;
	int probs[36] = {0};
	for (i = 0; i < TRIES; i++) {
		randSeed = i;
		if (rand()%36 == 6 && rand()%36 == 19 && rand()%36 == 16 && rand()%36 == 29) {
			int next = rand()%36;
			probs[next]++;
			printf("Next number mod 36: %i\n", next);
		}
		/*
		else {
			if (columncnt < COLUMNS) {
				printf(".");
				columncnt++;
			}
			else {
				printf("\n.");
				columncnt = 0;
			}
		}
		*/
	}
	for (i = 0; i < 36; i++) {
		printf("Ind: %i, P: %i\n", i, probs[i]);
	}
	return 0;
}