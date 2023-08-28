#include "lists.h"


void free_listint2(listint_t **head)
{
	listint_t *t;

	if (!(*head))
		return;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
}
