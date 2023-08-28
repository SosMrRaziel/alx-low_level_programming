#include "lists.h"
/**
 * *add_nodeint - adds a new node to the struct
 * @head: the head
 * @n: the value
 * Return: the address of the new Value
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = *head;
	*head = nd;
return (nd);
}
