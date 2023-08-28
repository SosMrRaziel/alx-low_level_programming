#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: ponter to the head of the list
**/
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (!head)
		return;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
}
