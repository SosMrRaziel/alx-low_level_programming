#include "lists.h"
/**
 * listint_len - count number of elements
 * @h: the way of the sword
 * Return: number of soliders
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
