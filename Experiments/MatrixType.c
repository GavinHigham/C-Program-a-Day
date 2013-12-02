#include <stdio.h>
#include <stdlib.h>

typedef int matrix3[3][3];

matrix3 * m3add(matrix3 a, matrix3 b)
{
	printf("Entered m3add()\n");
	int i, j;
	matrix3 new_m3;
	matrix3 *new_m3_data = calloc(3, sizeof(int[3]));
	new_m3 = *new_m3_data;
	for (i = 0; i < 3; i++)
		for (j = 0; i < 3; j++)
			new_m3[i][j] = a[i][j] + b[i][j];
	return &new_m3;
}

int main()
{
	int i, j;
	matrix3 a = {{1, 2, 3},\
				 {4, 5, 6},\
				 {7, 8, 9}};
	matrix3 b = {{1, 2, 3},\
				 {4, 5, 6},\
				 {7, 8, 9}};
	printf("Successfully initialized matrices.\n");
	matrix3 *c = m3add(a, b);

	printf("About to print.\n");
	for (i = 0; i < 3; i++)
		printf("%i, %i, %i\n", *c[i][0], *c[i][1], *c[i][2]);
	free(c);
	return 0;
}