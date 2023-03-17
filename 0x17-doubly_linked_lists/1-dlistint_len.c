#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list.
 * @h: pointer to head of list
 * Return: number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
