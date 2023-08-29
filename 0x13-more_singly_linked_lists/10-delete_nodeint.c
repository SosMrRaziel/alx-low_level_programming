#include "lists.h"
/**
 * delete_nodeint_at_index - for being rude
 * @head: the master of them
 * @index: the leader
 * Return: value of delted node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *now, *pre;
	unsigned int i;

	if (!(*head))
		return (-1);

	now = *head;
	pre = NULL;

	for (i = 0; now && i < index; i++)
	{
		pre = now;
		now = now->next;
	}
	if (!now)
		return (-1);
	if (!pre)
		*head = now->next;
	else
		pre->next = now->next;
	free(now);
		return (1);
}
