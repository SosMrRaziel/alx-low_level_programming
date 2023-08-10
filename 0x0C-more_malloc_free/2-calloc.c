#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array with.
 *
 * Return: pointer to the array or NULL if it fails.
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;
	ptr = malloc (t);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, t);
return (0);
}

