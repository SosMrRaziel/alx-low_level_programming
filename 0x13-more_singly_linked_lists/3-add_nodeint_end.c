#include "lists.h"
/**
 * *add_nodeint_end - add node at the end
 * @head: git push
 * @n: number of strings
 * Return: lnd
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *nd = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (!nd)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (!*head)
	{
		*head = nd;
		return (nd);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = nd;

	return (nd);
}
