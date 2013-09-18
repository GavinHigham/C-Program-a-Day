#include <stdio.h>

//Tests possible array initializations.

int main()
{
	int one[3] = [1,2,3];
	int two[3] = [1],[2],[3];

	int three[] = {1, 2, 3};
	int four[3];
	
	four = {1, 2, 3};
	return 0;
}