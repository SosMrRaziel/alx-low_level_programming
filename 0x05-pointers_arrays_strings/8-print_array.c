#include "main.h"
/**
* print_array - prints array
* @a: the array
* @n: is the number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
printf("\n");
}
