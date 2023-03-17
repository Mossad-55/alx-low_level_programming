#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index
 * @head: head node
 * @index: index to return
 *
 * Return: node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		i++;
	}
	return (curr);
}
