#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list.
 * @h: pointer to the list.
 *
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
