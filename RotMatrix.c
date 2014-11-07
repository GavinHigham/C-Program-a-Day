#include <stdio.h>
#include <stdlib.h>
int DIMENSION = 1000;

void printMatrix(int *matrix, int n)
{
	printf("Printing a matrix:\n");
	for (int i = 0; i < n*n; i++) printf("%2d%c", matrix[(i/n)*n + i%n], (i+1)%n==0?'\n':' ');
}

void permute4(int *a, int *b, int *c, int *d)
{
	int tmp = *a;
	*a = *b;
	*b = *c;
	*c = *d;
	*d = tmp;
}

void rotateMatrix(int *matrix, int d)
{
	int n = d-1;
	for (int i = 0; i < d/2; i++)
		for (int j = i; j < d-1-i; j++)
			permute4(&matrix[i*d+j], &matrix[(n-j)*d+i], &matrix[(n-i)*d+(n-j)], &matrix[j*d+(n-i)]);
}

int main()
{
	int matMemory[DIMENSION*DIMENSION]; //Stack allocate for the heck of it.
	int *testMat = (int *)matMemory;
	for (int i = 0; i < DIMENSION*DIMENSION; i++) testMat[i] = i;

	printMatrix(testMat, DIMENSION);
	rotateMatrix(testMat, DIMENSION);
	printMatrix(testMat, DIMENSION);
	return 0;
}