#include "search_algos.h"

/**
* print_array - prints array
* @a: the array
* @n: is the number of elements of the array to be printed
*/

void print_array(int *a, size_t n)
{
	size_t i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
putchar('\n');
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int start, end = size - 1;
	int mid;

	for (start = 0; start <= end;)
	{
		if (array == NULL)
			return (-1);

		mid = start + (end - start) / 2;

		printf("Searching in array: ");
		print_array(array + start, end - start + 1);



		if (array[mid] == value)
		{
			return (mid);
		}
		if (value < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
