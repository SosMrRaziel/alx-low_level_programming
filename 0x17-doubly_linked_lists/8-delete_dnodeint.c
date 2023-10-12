#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp; /*declare a temporary pointer to traverse the list*/
	unsigned int i; /*declare a counter variable*/

	if (head == NULL || *head == NULL) /* check if the list is empty or invalid*/
		return (-1); /*return -1 to indicate failure*/

	tmp = *head; /*assign the head pointer to the temporary pointer*/

	if (index == 0) /*check if the node to delete is the first node*/
	{
		*head = tmp->next; /*update the head pointer to point to the next node*/
		if (*head != NULL) /*check if the next node is not NULL*/
			(*head)->prev = NULL; /*set the prev pointer of the next node to NULL*/
		free(tmp); /*free the memory of the first node*/
		return (1); /*return 1 to indicate success*/
	}

/*loop until the index or the end of the list is reached*/
	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next; /*move the temporary pointer to the next node*/

	if (tmp == NULL) /*check if the index is out of range*/
		return (-1); /*return -1 to indicate failure*/
	/**update the next pointer of the previous node to point to the next node*/
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL) /*check if the next node is not NULL*/
/*update the prev pointer of the next node to point to the previous node*/
		tmp->next->prev = tmp->prev;
	free(tmp); /*free the memory of the node to delete*/
	return (1); /*return 1 to indicate success*/
}
