#include <stdio.h>
#include <stdlib.h>

// Friday, January 25, 2013
// Takes the number of people you'd like to make tea for,
// prints the amount of water to boil (in litres),
// and the number of teabags to use in the pot.
//
// This is how my dad and I make proper British tea.
// Sometimes you can stretch the tea made for more people.
// This formula assumes you're using milk and sugar.
// Tetley brand is the best. And make sure to warm the pot.

int main(int argc, char* argv[]) {
	int people = atoi(argv[1]);
	float litres;

	//For the most part you can stick to the lines on the kettle.
	switch (people) {
		case 1: litres = 0.30;
		break;
		case 2: litres = 0.75;
		break;
		case 3: litres = 1.00;
		break;
		case 4: litres = 1.25;
		break;
		case 5: litres = 1.50;
		break;
		case 6: litres = 1.75;
		break;
		case 0: printf("You want to make tea for zero people?\n");
		break;
		default: {
			printf("This formula assumes you have a kettle and pot with capacity of at most 1.75 litres.\n");
			printf("You'll have to make tea more than once.\n");
			return 0;
		}
	}

	//Five teabags stretches just fine to six people.
	if (people == 6) people = 5;

	printf ("%1.2f litres of water, %i teabags in the pot.\n", litres, people);
	return 0;
}