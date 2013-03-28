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

int randomized_partition(int a[], int p, int r)
{
	int i;
	int largest = 0;
	for (i = 0; i < r; i++) if (a[largest] < a[i]) largest = i;
	printf("The largest element is: %i\n", a[largest]);
	swap(&a[largest], &a[r - 1]);
	return partition(a, p, r);
}

int randomized_select(int a[], int p, int r, int i)
{
	printf("p is %i, and a[p] is %i\n", p, a[p]);
	if (p == r) return a[p];
	int q = randomized_partition(a, p, r);
	int k = q - p + 1;
	if (i == k) {
		printf("q is %i, and a[q] is %i\n", q, a[q]);
		return a[q];
	}
	else if (i < k) {
		printf("Calling randomized_select with array a, %i, %i, %i\n", q + 1, r, i);
		randomized_select(a, p, q, i);
	}
	else {
		printf("Calling randomized_select with array a, %i, %i, %i\n", q + 1, r, i - k);
		return randomized_select(a, q + 1, r, i - k);
	}
}

int main()
{
	int array[] = {3, 2, 9, 0, 7, 5, 4, 8, 6, 1};
	//int array[] = {2, 8, 7, 1, 3, 5, 6, 4};
	//int size = sizeof(array)/sizeof(int);
	int size = 10;
	int partition = randomized_select(array, 0, size, 0);
	printf("Partition returns : %i\n", partition);
	return 0;
}