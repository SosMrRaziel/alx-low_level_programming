#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 *                  on each element of an array.
 * @array: pointer to an array of integers.
 * @size: size of the array.
 * @action: pointer to the function to be executed.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
