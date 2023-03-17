#include "lists.h"

/**
 * free_dlistint - frees created linked lists
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *tmp;

	while (curr != NULL)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
}
