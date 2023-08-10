#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;
	ptr = malloc(t);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, t);
return (ptr);
}

