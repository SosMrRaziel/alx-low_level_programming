#include "lists.h"
/**
*sum_listint - of all the data (n) of a listint_t linked list
*@head: head of the linked list
*Return: i
*/

int sum_listint(listint_t *head)
{
	int i;
	listint_t *now = head;

	for (i = 0; now != NULL;)
	{
		i += now->n;
		now = now->next;
	}
	return (i);
}
