#include <stdio.h>
#define TURNS 20
#define MOVES 4

int indexOfBiggest(double num[], int size)
{
	int indexOfLowest = 0;
	int i;
	for (i = 1; i < size; i++)
		if (num[i] > num[indexOfLowest]) indexOfLowest = i;
	return indexOfLowest;
}

int main()
{
	int i, j, k;
	int playerMoves[TURNS] = {0};
	int costs[TURNS][MOVES];
	double playerWeight[TURNS][MOVES];
	//Zero out the 2D arrays.
	for (i = 0; i < TURNS; i++)
		for (j = 0; j < MOVES; j++)
			costs[i][j] = playerWeight[i][j] = 0;

	//For each turn...
	for (i = 0; i < TURNS; i++) {
		double denominator = 0;
		//For each possible move...
		for (j = 0; j < MOVES; j++) {
			int rowCostSum = 0;
			for (k = 0; k < i; k++) //Sum up row costs so far.
				rowCostSum += costs[k][j];
			playerWeight[i][j] = 1 - 0.1*rowCostSum; //Compute numerators.
			denominator += playerWeight[i][j]; //Sum up the denominator.
		}
		for (j = 0; j < MOVES; j++)
			playerWeight[i][j] /= denominator; //Divide each term by denominator.
		playerMoves[i] = indexOfBiggest(playerWeight[i], MOVES); //Player chooses biggest.
		costs[i][playerMoves[i]] = 1; //Adversary hits player.
	}
	//Printing.
	int totalCost = 0;
	for (i = 0; i < TURNS; i++) {
		printf("Turn %i\n", i+1);
		printf("Player Weights | Adversary Set Costs\n");
		for (j = 0; j < MOVES; j++) {
			printf("%14f | %14i\n", playerWeight[i][j], costs[i][j]);
		}
		printf("\nPlayer chose move %i, and incurred cost %i\n\n", playerMoves[i], costs[i][playerMoves[i]]);
		totalCost += costs[i][playerMoves[i]];
	}
	printf("Total cost: %i\n", totalCost);
	return 0;
}