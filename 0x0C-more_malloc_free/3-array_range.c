#include "main.h"
/**
 * *array_range - array of range of integers
 * @min: minimum ineteger
 * @max: maximum integer
 * Return: the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = (int *) malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;
return (arr);
}
