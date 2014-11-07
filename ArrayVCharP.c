#include <stdio.h>
#define COLS 3
#define ROWS 4

int main()
{
	int array[COLS][ROWS];

	for (int i = 0; i < COLS; i++)
		for (int j = 0; j < ROWS; j++)
			array[i][j] = j + i * ROWS;

	for (int i = 0; i < ROWS*COLS; i++)
		printf("%i ", array[0][i]);
	return 0;
}