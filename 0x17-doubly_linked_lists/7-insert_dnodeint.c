#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index location
 * @h: pointer to the head
 * @idx: index location
 * @n: integer to store in new index
 *
 * Return: pointer to new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = *h;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	while (i < idx)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		i++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = curr;
		*h = new_node;
		new_node->prev = NULL;
		curr->prev = new_node;
		return (new_node);
	}

	new_node->next = curr;
	new_node->prev = curr->prev;
	curr->prev->next = new_node;
	curr->prev = new_node;

	return (new_node);
}
