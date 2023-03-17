#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head
 * @index: index to delete
 *
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	for (i = 0; current && i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (*head == current)
		*head = current->next;

	if (current->next)
		current->next->prev = current->prev;

	if (current->prev)
		current->prev->next = current->next;
	free(current);

	return (1);
}
