#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to head node
 * @n: value to store in new node
 *
 * Return: address of new node, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *now;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	now = *head;
	while (now->next != NULL)
		now = now->next;
	now->next = new_node;
	new_node->prev = now;

	return (new_node);
}
