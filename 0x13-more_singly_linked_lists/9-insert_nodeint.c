#include "lists.h"

/**
 * *insert_nodeint_at_index - adds a node at nth index.
 * @head: linked list.
 * @idx: index of the node.
 * @n: value of the node.
 *
 * Return: address of the inserted node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}

	return (NULL);
}
