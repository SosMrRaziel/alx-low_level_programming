#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp = NULL;
    if (head != NULL)
        while (head->prev != NULL)
            head = head->prev;

    while ((tmp = head) != NULL)
    {
        head = head->next;
        free(tmp);
    }
}
