#include <stdio.h>

void new_temp_array(int first_int)
{
	int arr[] = {first_int};
	printf("The array value is: %i\n", arr[0]);
}

int main()
{
	new_temp_array(8);
	return 0;
}