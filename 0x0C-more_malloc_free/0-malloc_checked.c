#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
