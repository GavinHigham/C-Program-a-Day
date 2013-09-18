#include <stdio.h>

//Testing the partition algorithm for quicksort.
//Gavin Higham, Keenan Mau, Brandon Rossi

void swap(int* a, int* b)
{
	printf("%i was swapped with %i.\n", *a, *b);
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int a[], int p, int r)
{
	int j;
	int z;
	int x = a[r-1];
	int i = p-1;

	printf("Initial array is:       ");
	for (z = 0; z < r; z++) printf("[%2i]", a[z]);
	printf("\n");

	for (j = p; j < r; j++) {
		if (a[j] < x) {
			i++;
			swap(&a[i], &a[j]);
			printf("When j is %2i, array is: ", j);
			for (z = 0; z < r; z++) printf("[%2i]", a[z]);
			printf("\n");
		}
	}
	swap(&a[i+1], &a[r-1]);
	printf("Final array is:         ");
	for (z = 0; z < r; z++) printf("[%2i]", a[z]);
	printf("\n");
	return i+1;
}

int main()
{
	int array[] = {13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11};
	//int array[] = {2, 8, 7, 1, 3, 5, 6, 4};
	printf("Partition returns : %i\n", partition(array, 0, sizeof(array)/sizeof(int)));
	return 0;
}