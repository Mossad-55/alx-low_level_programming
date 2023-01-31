#include "lists.h"

/**
 * listint_len - returns numbers of elements of a linked list.
 * @h: linked list.
 *
 * Return: number of nodes(size_t).
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
