#include "lists.h"
/**
* free_listint - frees a listint_t list
* @head: ponter to the head of the list
**/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}


