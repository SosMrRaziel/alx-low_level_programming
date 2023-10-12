#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	if (current == NULL)
		return (NULL);

	if (idx == 1)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
	new_node->n = n;
	new_node->next = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
	}
	return (insert_dnodeint_at_index(&(current->next), idx -1, n));
}
