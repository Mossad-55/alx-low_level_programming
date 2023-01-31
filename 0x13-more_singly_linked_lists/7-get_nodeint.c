#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node.
 * @head: linked list.
 * @index : index of the node.
 *
 * Return: the address of the wanted node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}

	return (NULL);
}
