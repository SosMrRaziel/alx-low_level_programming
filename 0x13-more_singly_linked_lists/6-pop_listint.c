#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (!head)
		return (0);
	n = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);
return (n);
}

