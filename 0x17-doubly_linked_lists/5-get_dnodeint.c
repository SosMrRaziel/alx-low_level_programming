#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be returned.
 *
 * Return: The nth node of the list, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *now = head;
	unsigned int i = 0;

	while (now != NULL)
	{
		if (i == index)
			return (now);
		i++;
		now = now->next;
	}
	return (NULL);
}
